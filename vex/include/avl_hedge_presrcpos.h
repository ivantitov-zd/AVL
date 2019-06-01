#pragma once
#ifndef _AVL_HEDGE_PRESRCPOS_H_
#define _AVL_HEDGE_PRESRCPOS_H_

float
avl_hedge_presrcpos(const int geometry; const int hedge)
{
    return point(geometry, 'P', hedge_presrcpoint(geometry, hedge));
}

float
avl_hedge_presrcpos(const string geometry; const int hedge)
{
    return point(geometry, 'P', hedge_presrcpoint(geometry, hedge));
}

#endif  // _AVL_HEDGE_PRESRCPOS_H_
