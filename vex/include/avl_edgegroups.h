#pragma once
#ifndef _AVL_EDGEGROUPS_H_
#define _AVL_EDGEGROUPS_H_

string[]
avl_edgegroups(const int geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

string[]
avl_edgegroups(const string geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

#endif  // _AVL_EDGEGROUPS_H_
