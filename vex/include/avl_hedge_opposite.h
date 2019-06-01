#pragma once
#ifndef _AVL_HEDGE_OPPOSITE_H_
#define _AVL_HEDGE_OPPOSITE_H_

#include "avl_isodd.h"

int
avl_hedge_opposite(const int geometry; const int hedge)
{
    int primnum = hedge_prim(geometry, hedge);
    if (int(primintrinsic(geometry, 'closed', primnum)) == 0 || primnum < 0)
        return -1;
    int hedgeCount = primvertexcount(geometry, primnum);
    if (avl_isodd(hedgeCount))
        return -1;
    int oppositeHedge = hedge;
    for (int i = 0; i < hedgeCount / 2; ++i)
        oppositeHedge = hedge_next(geometry, oppositeHedge);
    return oppositeHedge;
}

int
avl_hedge_opposite(const string geometry; const int hedge)
{
    int primnum = hedge_prim(geometry, hedge);
    if (int(primintrinsic(geometry, 'closed', primnum)) == 0 || primnum < 0)
        return -1;
    int hedgeCount = primvertexcount(geometry, primnum);
    if (avl_isodd(hedgeCount))
        return -1;
    int oppositeHedge = hedge;
    for (int i = 0; i < hedgeCount / 2; ++i)
        oppositeHedge = hedge_next(geometry, oppositeHedge);
    return oppositeHedge;
}

#endif  // _AVL_HEDGE_OPPOSITE_H_
