#pragma once
#ifndef _AVL_POLYNEIGHBOURS_H_
#define _AVL_POLYNEIGHBOURS_H_

#include "avl_unique.h"

int[]
avl_polyneighbours(const int geometry;
                   const int primnum;
                   const int byPoints)
{
    int primitives[];
    if (byPoints == 0)
    {
        int startHedge = primhedge(geometry, primnum);
        int hedge = startHedge;
        while (hedge != -1)
        {
            for (int nextHedge = hedge_nextequiv(geometry, hedge);
                 nextHedge != hedge;
                 nextHedge = hedge_nextequiv(geometry, nextHedge))
            {
                int prim = hedge_prim(geometry, nextHedge);
                if (prim != -1 && prim != primnum)
                {
                    append(primitives, prim);
                }
            }
            hedge = hedge_next(geometry, hedge);
            if (hedge == startHedge)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primitives, pointprims(geometry, pt));
        }
        primitives = avl_unique(sort(primitives));
        removevalue(primitives, primnum);
    }
    return primitives;
}

int[]
avl_polyneighbours(const int geometry;
                   const int primnum)
{
    return avl_polyneighbours(geometry, primnum, 1);
}

int[]
avl_polyneighbours(const string geometry;
                   const int primnum;
                   const int byPoints)
{
    int primitives[];
    if (byPoints == 0)
    {
        int startHedge = primhedge(geometry, primnum);
        int hedge = startHedge;
        while (hedge != -1)
        {
            for (int nextHedge = hedge_nextequiv(geometry, hedge);
                 nextHedge != hedge;
                 nextHedge = hedge_nextequiv(geometry, nextHedge))
            {
                int prim = hedge_prim(geometry, nextHedge);
                if (prim != -1 && prim != primnum)
                {
                    append(primitives, prim);
                }
            }
            hedge = hedge_next(geometry, hedge);
            if (hedge == startHedge)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primitives, pointprims(geometry, pt));
        }
        primitives = avl_unique(sort(primitives));
        removevalue(primitives, primnum);
    }
    return primitives;
}

int[]
avl_polyneighbours(const string geometry;
                   const int primnum)
{
    return avl_polyneighbours(geometry, primnum, 1);
}

#endif  // _AVL_POLYNEIGHBOURS_H_
