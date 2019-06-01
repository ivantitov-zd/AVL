#pragma once
#ifndef _AVL_HEDGE_POSTDSTPOS_H_
#define _AVL_HEDGE_POSTDSTPOS_H_

float
avl_hedge_postdstpos(const int geometry; const int hedge)
{
    return point(geometry, 'P', hedge_postdstpoint(geometry, hedge));
}

float
avl_hedge_postdstpos(const string geometry; const int hedge)
{
    return point(geometry, 'P', hedge_postdstpoint(geometry, hedge));
}

#endif  // _AVL_HEDGE_POSTDSTPOS_H_
