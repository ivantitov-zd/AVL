#pragma once
#ifndef _avl_hedge_srcpos_
#define _avl_hedge_srcpos_

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

#endif
