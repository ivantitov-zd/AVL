#pragma once
#ifndef _AVL_ISTINY_H_
#define _AVL_ISTINY_H_

#include <math.h>

int
avl_istiny(const int geometry;
           const int primnum;
           const float epsilon)
{
    int points[] = primpoints(geometry, primnum);
    float epsilon2 = epsilon * epsilon;
    for (int pt = len(points) - 2; pt > -2; --pt)
    {
        vector position1 = point(geometry, 'P', points[pt]);
        vector position2 = point(geometry, 'P', points[pt+1]);
        if (distance2(position1, position2) < epsilon2)
            return 1;
    }
    return 0;
}

int
avl_istiny(const int geometry; const int primnum)
{
    return avl_istiny(geometry, primnum, M_TOLERANCE);
}

int
avl_istiny(const string geometry;
           const int primnum;
           const float epsilon)
{
    int points[] = primpoints(geometry, primnum);
    float epsilon2 = epsilon * epsilon;
    for (int pt = len(points) - 2; pt > -2; --pt)
    {
        vector position1 = point(geometry, 'P', points[pt]);
        vector position2 = point(geometry, 'P', points[pt+1]);
        if (distance2(position1, position2) < epsilon2)
            return 1;
    }
    return 0;
}

int
avl_istiny(const string geometry; const int primnum)
{
    return avl_istiny(geometry, primnum, M_TOLERANCE);
}

#endif  // _AVL_ISTINY_H_
