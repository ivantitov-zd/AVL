#pragma once
#ifndef _avl_polyneighbours_
#define _avl_polyneighbours_

#include "avl_unique.h"

int[]
avl_polyneighbours(const int geometry;
                   const int primnum;
                   const int byPoints)
{
    int primArray[];
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
                    append(primArray, prim);
                }
            }
            hedge = hedge_next(geometry, hedge);
            if (hedge == startHedge)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primArray, pointprims(geometry, pt));
        }
        primArray = avl_unique(sort(primArray));
        removevalue(primArray, primnum);
    }
    return primArray;
}

int[]
avl_polyneighbours(const string geometry;
                   const int primnum;
                   const int byPoints)
{
    int primArray[];
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
                    append(primArray, prim);
                }
            }
            hedge = hedge_next(geometry, hedge);
            if (hedge == startHedge)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primArray, pointprims(geometry, pt));
        }
        primArray = avl_unique(sort(primArray));
        removevalue(primArray, primnum);
    }
    return primArray;
}

#endif
