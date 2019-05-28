#pragma once
#ifndef _avl_primperimeter_
#define _avl_primperimeter_

float
avl_primperimeter(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredperimeter', primnum);
}

float
avl_primperimeter(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredperimeter', primnum);
}

#endif
