#pragma once
#ifndef _avl_hedge_opposite_
#define _avl_hedge_opposite_

int
avl_hedge_opposite(const int geometry; const int hedge)
{
    int primnum = hedge_prim(geometry, hedge);
    if (int(primintrinsic(geometry, 'closed', primnum)) == 0 || primnum < 0) return -1;
    int hedgeCount = primvertexcount(geometry, primnum);
    if (hedgeCount & 1 != 0) return -1;
    int oppositeHedge = hedge;
    for (int i = 0; i < hedgeCount / 2; ++i)
        oppositeHedge = hedge_next(geometry, oppositeHedge);
    return oppositeHedge;
}

int
avl_hedge_opposite(const string geometry; const int hedge)
{
    int primnum = hedge_prim(geometry, hedge);
    if (int(primintrinsic(geometry, 'closed', primnum)) == 0 || primnum < 0) return -1;
    int hedgeCount = primvertexcount(geometry, primnum);
    if (hedgeCount & 1 != 0) return -1;
    int oppositeHedge = hedge;
    for (int i = 0; i < hedgeCount / 2; ++i)
        oppositeHedge = hedge_next(geometry, oppositeHedge);
    return oppositeHedge;
}

#endif
