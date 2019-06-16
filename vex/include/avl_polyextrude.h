#pragma once
#ifndef _AVL_POLYEXTRUDE_H_
#define _AVL_POLYEXTRUDE_H_

#include "avl_copyprimattribs.h"
#include "avl_copyprimgroups.h"
#include "avl_reversevertexorder.h"

int[]
avl_polyextrude(const int geohandle;
                const int primnum;
                const float distance;
                const float inset;
                const int limitInsetting;
                const float commonLimit;
                const float twist;
                const int divisions;
                const int outputFront;
                const int outputFrontGroup;
                const string frontGroupName;
                const int outputSide;
                const int outputSideGroup;
                const string sideGroupName;
                const int outputBack;
                const int outputBackGroup;
                const string backGroupName)
{
    int primitives[];

    if (distance == 0 && inset == 0)
        return primitives;

    vector primNormal = normalize(prim_normal(geohandle, primnum, {0.5, 0.5, 0}));
    vector primCenter = prim(geohandle, 'P', primnum);

    int points[] = primpoints(geohandle, primnum);
    int sourcePointCount = len(points);
    resize(points, sourcePointCount * divisions);

    if (!outputBack)
        removeprim(geohandle, primnum, 0);
    else
    {
        if (distance >= 0)
            avl_reversevertexorder(geohandle, primnum);
        if (outputBackGroup)
            setprimgroup(geohandle, backGroupName, primnum, 1);
        append(primitives, primnum);
    }

    vector shifts[];
    resize(shifts, sourcePointCount);
    vector sourcePointPosition, insetShift, shift;
    float insetLimit;
    for (int i = 0; i < sourcePointCount; ++i)
    {
        sourcePointPosition = point(geohandle, 'P', points[i]);
        insetShift = primCenter - sourcePointPosition;
        if (limitInsetting)
        {
            insetLimit = commonLimit == 0 ? length(insetShift) : commonLimit;
            shift = primNormal * distance + normalize(insetShift) * min(inset, insetLimit);
        } else
            shift = primNormal * distance + normalize(insetShift) * inset;
        shifts[i] = shift / divisions;
    }

    if (outputSide)  // Todo (1.0): output front
    {
        for (int d = 1; d <= divisions; ++d)
        {
            for (int i = 0; i < sourcePointCount; ++i)
            {
                int newPoint = addpoint(geohandle, points[i]);
                setpointattrib(geohandle, 'P', newPoint, shifts[i] * d, 'add');
                points[sourcePointCount * d + i] = newPoint;
            }
            for (int v = 0; v < sourcePointCount; ++v)
            {
                int side = addprim(geohandle, 'poly');
                addvertex(geohandle, side, points[sourcePointCount * (d-1) + v]);
                addvertex(geohandle, side, points[sourcePointCount * (d-1) + ((v + 1) % sourcePointCount)]);
                addvertex(geohandle, side, points[sourcePointCount * d + ((v + 1) % sourcePointCount)]);
                addvertex(geohandle, side, points[sourcePointCount * d + v]);
                if (outputSideGroup)
                    setprimgroup(geohandle, sideGroupName, side, 1);
                append(primitives, side);
            }
        }
    }

    if (outputFront)
    {
        int front = addprim(geohandle, 'poly', points[-sourcePointCount:]);
        avl_copyprimattribs(geohandle, geohandle, primnum, front, 'set');
        avl_copyprimgroups(geohandle, geohandle, primnum, front, 'set');
        if (outputFrontGroup)
            setprimgroup(geohandle, frontGroupName, front, 1);
        append(primitives, front);
    }
    return primitives;
}

#endif  // _AVL_POLYEXTRUDE_H_
