#pragma once
#ifndef _AVL_PRIMATTRIBS_H_
#define _AVL_PRIMATTRIBS_H_

string[]
avl_primattribs(const int geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

string[]
avl_primattribs(const string geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

#endif  // _AVL_PRIMATTRIBS_H_
