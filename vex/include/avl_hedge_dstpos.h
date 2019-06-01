#pragma once
#ifndef _AVL_HEDGE_DSTPOS_H_
#define _AVL_HEDGE_DSTPOS_H_

float
avl_hedge_dstpos(const int geometry; const int hedge)
{
    return point(geometry, 'P', hedge_dstpoint(geometry, hedge));
}

float
avl_hedge_dstpos(const string geometry; const int hedge)
{
    return point(geometry, 'P', hedge_dstpoint(geometry, hedge));
}

#endif  // _AVL_HEDGE_DSTPOS_H_
