#pragma once
#ifndef _AVL_DETAILATTRIBS_H_
#define _AVL_DETAILATTRIBS_H_

string[]
avl_detailattribs(const int geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

string[]
avl_detailattribs(const string geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

#endif  // _AVL_DETAILATTRIBS_H_
