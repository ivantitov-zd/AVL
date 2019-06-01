#pragma once
#ifndef _AVL_POINTATTRIBS_H_
#define _AVL_POINTATTRIBS_H_

string[]
avl_pointattribs(const int geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

string[]
avl_pointattribs(const string geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

#endif  // _AVL_POINTATTRIBS_H_
