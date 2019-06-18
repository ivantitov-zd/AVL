#pragma once
#ifndef _AVL_COPYVERTEXGROUPS_H_
#define _AVL_COPYVERTEXGROUPS_H_

#include "avl_vertexgroups.h"
#include "avl_copyvertexgroup.h"

void
avl_copyvertexgroups(const int geometry;
                     const int geohandle;
                     const int srcVtxnum;
                     const int dstVtxnum)
{
    for (string groupName : avl_vertexgroups(geometry))
        avl_copyvertexgroup(geometry, geohandle, srcVtxnum, dstVtxnum, groupName);
}

void
avl_copyvertexgroups(const int geometry;
                     const int geohandle;
                     const int srcVtxnum;
                     const int dstVtxnum;
                     const string mode)
{
    for (string groupName : avl_vertexgroups(geometry))
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
    for (string groupName : avl_vertexgroups(geometry))
        if (match(pattern, groupName))
            avl_copyvertexgroup(geometry, geohandle, srcVtxnum, dstVtxnum, groupName, mode);
}

#endif  // _AVL_COPYVERTEXGROUPS_H_
