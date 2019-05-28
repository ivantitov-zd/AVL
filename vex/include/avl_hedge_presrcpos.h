#pragma once
#ifndef _avl_hedge_presrcpos_
#define _avl_hedge_presrcpos_

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

#endif
