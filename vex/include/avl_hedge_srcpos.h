#pragma once
#ifndef _AVL_HEDGE_SRCPOS_H_
#define _AVL_HEDGE_SRCPOS_H_

float
avl_hedge_srcpos(const int geometry; const int hedge)
{
    return point(geometry, 'P', hedge_srcpoint(geometry, hedge));
}

float
avl_hedge_srcpos(const string geometry; const int hedge)
{
    return point(geometry, 'P', hedge_srcpoint(geometry, hedge));
}

#endif  // _AVL_HEDGE_SRCPOS_H_
