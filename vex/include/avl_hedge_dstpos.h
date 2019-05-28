#pragma once
#ifndef _avl_hedge_dstpos_
#define _avl_hedge_dstpos_

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

#endif
