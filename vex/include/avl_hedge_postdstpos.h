#pragma once
#ifndef _avl_hedge_postdstpos_
#define _avl_hedge_postdstpos_

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

#endif
