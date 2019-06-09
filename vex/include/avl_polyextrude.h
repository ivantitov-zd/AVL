#pragma once
#ifndef _AVL_POLYEXTRUDE_H_
#define _AVL_POLYEXTRUDE_H_

#include "avl_copyprimattribs.h"
#include "avl_copyprimgroups.h"
#include "avl_reversevertexorder.h"

void
avl_polyextrude(const int geometry;
                const int primnum;
                const float distance;
                const float inset;
                const int limitInsetting
                const float commonLimit;
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
    if (distance == 0.0 && inset == 0.0)
        return;

    vector primNormal = prim_normal(geometry, primnum, {0.5, 0.5, 0.0});
    vector primCenter = prim(geometry, 'P', primnum);

    int points[] = primpoints(geometry, primnum);
    int sourcePointCount = len(points);
    resize(points, sourcePointCount * divisions);

    if (!outputBack)
        removeprim(geometry, primnum, 0);
    else
    {
        if (distance >= 0)
            avl_reversevertexorder(geometry, primnum);
        if (outputBackGroup)
            setprimgroup(geometry, backGroupName, primnum, 1);
    }

    vector shifts[];
    resize(shifts, sourcePointCount);
    vector sourcePointPosition, insetShift, shift;
    float insetLimit;
    for (int i = 0; i < sourcePointCount; ++i)
    {
        sourcePointPosition = point(geometry, 'P', points[i]);
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
                int newPoint = addpoint(geometry, points[i]);
                setpointattrib(geometry, 'P', newPoint, shifts[i] * d, 'add');
                points[sourcePointCount * d + i] = newPoint;
            }
            for (int v = 0; v < sourcePointCount; ++v)
            {
                int side = addprim(geometry, 'poly');
                addvertex(geometry, side, points[sourcePointCount * (d-1) + v]);
                addvertex(geometry, side, points[sourcePointCount * (d-1) + ((v + 1) % sourcePointCount)]);
                addvertex(geometry, side, points[sourcePointCount * d + ((v + 1) % sourcePointCount)]);
                addvertex(geometry, side, points[sourcePointCount * d + v]);
                if (outputSideGroup)
                    setprimgroup(geometry, sideGroupName, side, 1);
            }
        }
    }

    if (outputFront)
    {
        int front = addprim(geometry, 'poly', points[-sourcePointCount:]);
        avl_copyprimattribs(geometry, geometry, primnum, front, 'set');
        avl_copyprimgroups(geometry, geometry, primnum, front, 'set');
        if (outputFrontGroup)
            setprimgroup(geometry, frontGroupName, front, 1);
    }
}

#endif  // _AVL_POLYEXTRUDE_H_
