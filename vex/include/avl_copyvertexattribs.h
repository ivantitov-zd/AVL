#pragma once
#ifndef _AVL_COPYVERTEXATTRIBS_H_
#define _AVL_COPYVERTEXATTRIBS_H_

#include "avl_vertexattribs.h"
#include "avl_copyvertexattrib.h"

void
avl_copyvertexattribs(const int geometry;
                      const int geohandle;
                      const int srcVtxnum;
                      const int dstVtxnum)
{
    for (string attribName : avl_vertexattribs(geometry))
        avl_copyvertexattrib(geometry, geohandle, srcVtxnum, dstVtxnum, attribName);
}

void
avl_copyvertexattribs(const int geometry;
                      const int geohandle;
                      const int srcVtxnum;
                      const int dstVtxnum;
                      const string mode)
{
    for (string attribName : avl_vertexattribs(geometry))
        avl_copyvertexattrib(geometry, geohandle, srcVtxnum, dstVtxnum, attribName, mode);
}

void
avl_copyvertexattribs(const int geometry;
                      const int geohandle;
                      const int srcVtxnum;
                      const int dstVtxnum;
                      const string mode;
                      const string pattern)
{
    for (string attribName : avl_vertexattribs(geometry))
        if (match(pattern, attribName))
            avl_copyvertexattrib(geometry, geohandle, srcVtxnum, dstVtxnum, attribName, mode);
}

#endif  // _AVL_COPYVERTEXATTRIBS_H_
