#pragma once
#ifndef _AVL_POINTGROUPS_H_
#define _AVL_POINTGROUPS_H_


string[]
avl_pointgroups(const int geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

string[]
avl_pointgroups(const string geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

#endif  // _AVL_POINTGROUPS_H_
