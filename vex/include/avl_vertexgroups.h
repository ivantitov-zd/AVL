#pragma once
#ifndef _AVL_VERTEXGROUPS_H_
#define _AVL_VERTEXGROUPS_H_

string[]
avl_vertexgroups(const int geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

string[]
avl_vertexgroups(const string geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

#endif  // _AVL_VERTEXGROUPS_H_
