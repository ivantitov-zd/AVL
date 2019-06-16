#pragma once
#ifndef _AVL_PRIMTYPENAME_H_
#define _AVL_PRIMTYPENAME_H_

string
avl_primtypename(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'typename', primnum);
}

string
avl_primtypename(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'typename', primnum);
}

#endif  // _AVL_PRIMTYPENAME_H_
