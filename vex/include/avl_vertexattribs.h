#pragma once
#ifndef _AVL_VERTEXATTRIBS_H_
#define _AVL_VERTEXATTRIBS_H_

string[]
avl_vertexattribs(const int geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

string[]
avl_vertexattribs(const string geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

#endif  // _AVL_VERTEXATTRIBS_H_
