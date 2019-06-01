#pragma once
#ifndef _AVL_PRIMGROUPS_H_
#define _AVL_PRIMGROUPS_H_

string[]
avl_primgroups(const int geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

string[]
avl_primgroups(const string geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

#endif  // _AVL_PRIMGROUPS_H_
