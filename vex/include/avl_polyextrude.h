#pragma once
#ifndef _AVL_POLYEXTRUDE_H_
#define _AVL_POLYEXTRUDE_H_
// Todo (1.0): refactor and optimize
void
avl_polyextrude(const int geometry;
                const int primnum;
                const float distance;
                const float inset;
                const int limitInsetting;
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
    // int sourcePoints[] = primpoints(geometry, primnum);
    // int sourcePointCount = len(sourcePoints);
    // int endPoints[];
    // resize(endPoints, sourcePointCount * divisions);

    int points[] = primpoints(geometry, primnum);
    int sourcePointCount = len(points);
    resize(points, sourcePointCount * divisions);

    if (!outputBack)
        removeprim(geometry, primnum, 0);
    else if (outputBackGroup)
        setprimgroup(geometry, backGroupName, primnum, 1);


    if (outputSide)
    {
        //
    }

    vector extr = primNormal * distance;
    // for (int i = 0; i < sourcePointCount; ++i)
    // {
    //     vector sourcePosition = point(geometry, 'P', sourcePoints[i]);
    //     vector ins = normalize(primCenter - sourcePosition) * inset;
    //     vector step = (extr + ins) / divisions;
    //     for (int d = 1; d <= divisions; ++d)
    //     {
    //         int newPoint = addpoint(geometry, sourcePoints[i]);
    //         setpointattrib(geometry, 'P', newPoint, step * d, 'add');
    //     }
    // }

    for (int d = 1; d <= divisions; ++d)
    {
        for (int i = 0; i < sourcePointCount; ++i)
        {
            vector sourcePosition = point(geometry, 'P', points[i]);
            vector shift = (extr + normalize(primCenter - sourcePosition) * inset) / divisions;
            int newPoint = addpoint(geometry, points[i]);
            setpointattrib(geometry, 'P', newPoint, shift * d, 'add');
            points[sourcePointCount * d + i] = newPoint;
        }
        for (int v = 0; v < sourcePointCount; ++v)
        {
            int side = addprim(geometry, 'poly');
            addvertex(geometry, side, points[sourcePointCount * d + v]);
            addvertex(geometry, side, points[sourcePointCount * d + ((v + 1) % sourcePointCount)]);
            addvertex(geometry, side, points[sourcePointCount * (d-1) + ((v + 1) % sourcePointCount)]);
            addvertex(geometry, side, points[sourcePointCount * (d-1) + v]);
            if (outputSideGroup)
                setprimgroup(geometry, sideGroupName, side, 1);
        }
    }

    if (outputFront)
    {
        int front = addprim(geometry, 'poly', points[-sourcePointCount:]);
        if (outputFrontGroup)
            setprimgroup(geometry, frontGroupName, front, 1);
    }
}

#endif  // _AVL_POLYEXTRUDE_H_
