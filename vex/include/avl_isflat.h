#pragma once
#ifndef _avl_isflat_
#define _avl_isflat_

#include "avl_isalmostequal.h"

int
avl_isflat(const int geometry; const int primnum)
{
    int points = primpoints(geometry, primnum);
    int pointCount = len(points);
    if (pointCount < 3) return 0;  // No polygon
    if (pointCount == 3) return 1;  // Triangle always flat
    vector pos1 = point(geometry, 'P', points[-1]);
    vector pos2 = point(geometry, 'P', points[0]);
    vector pos3 = point(geometry, 'P', points[1]);
    vector ref = cross(pos1 - pos2, pos2 - pos3);
    for (int i = 1; i < pointCount-1; ++i)
    {
        pos1 = point(geometry, 'P', points[i-1]);
        pos2 = point(geometry, 'P', points[i]);
        pos3 = point(geometry, 'P', points[i+1]);
        if (!avl_isalmostequal(cross(pos1 - pos2, pos2 - pos3), ref))
            return 0;
    }
    return 1;
}

int
avl_isflat(const string geometry; const int primnum)
{
    int points = primpoints(geometry, primnum);
    int pointCount = len(points);
    if (pointCount < 3) return 0;  // No polygon
    if (pointCount == 3) return 1;  // Triangle always flat
    vector pos1 = point(geometry, 'P', points[-1]);
    vector pos2 = point(geometry, 'P', points[0]);
    vector pos3 = point(geometry, 'P', points[1]);
    vector ref = cross(pos1 - pos2, pos2 - pos3);
    for (int i = 1; i < pointCount-1; ++i)
    {
        pos1 = point(geometry, 'P', points[i-1]);
        pos2 = point(geometry, 'P', points[i]);
        pos3 = point(geometry, 'P', points[i+1]);
        if (!avl_isalmostequal(cross(pos1 - pos2, pos2 - pos3), ref))
            return 0;
    }
    return 1;
}

#endif
