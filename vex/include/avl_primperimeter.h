#pragma once
#ifndef _AVL_PRIMPERIMETER_H_
#define _AVL_PRIMPERIMETER_H_

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

#endif  // _AVL_PRIMPERIMETER_H_
