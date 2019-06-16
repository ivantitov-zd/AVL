#pragma once
#ifndef _AVL_PRIMTYPE_H_
#define _AVL_PRIMTYPE_H_

int
avl_primtype(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'typeid', primnum);
}

int
avl_primtype(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'typeid', primnum);
}

#endif  // _AVL_PRIMTYPE_H_
