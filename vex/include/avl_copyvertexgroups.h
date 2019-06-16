#pragma once
#ifndef _AVL_COPYVERTEXGROUPS_H_
#define _AVL_COPYVERTEXGROUPS_H_

#include "avl_vertexgroups.h"
#include "avl_copyvertexgroup.h"

void
avl_copyvertexgroups(const int geometry;
                     const int geohandle;
                     const int srcVtxnum;
                     const int dstVtxnum;
                     const string mode)
{
    string groups[] = avl_vertexgroups(geometry);
    for (string groupName : groups)
        avl_copyvertexgroup(geometry, geohandle, srcVtxnum, dstVtxnum, groupName, mode);
}

void
avl_copyvertexgroups(const int geometry;
                     const int geohandle;
                     const int srcVtxnum;
                     const int dstVtxnum;
                     const string mode;
                     const string pattern)
{
    string groups[] = avl_vertexgroups(geometry);
    for (string groupName : groups)
        if (match(pattern, groupName))
            avl_copyvertexgroup(geometry, geohandle, srcVtxnum, dstVtxnum, groupName, mode);
}

#endif  // _AVL_COPYVERTEXGROUPS_H_
