#ifndef _apolyneighbours_
#define _apolyneighbours_

#include "aunique.h"

int[]
apolyneighbours(const int geometry; const int primnum; const int byPoints)
{
    int primArray[];
    if (byPoints == 0)
    {
        int start = primhedge(geometry, primnum);
        int hedge = start;
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
            if (hedge == start)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primArray, pointprims(geometry, pt));
        }
        primArray = aunique(sort(primArray));
        removevalue(primArray, primnum);
    }
    return primArray;
}

int[]
apolyneighbours(const string geometry; const int primnum; const int byPoints)
{
    int primArray[];
    if (byPoints == 0)
    {
        int start = primhedge(geometry, primnum);
        int hedge = start;
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
            if (hedge == start)
                break;
        }
    } else {
        foreach (int pt; primpoints(geometry, primnum))
        {
            push(primArray, pointprims(geometry, pt));
        }
        primArray = aunique(sort(primArray));
        removevalue(primArray, primnum);
    }
    return primArray;
}

#endif
