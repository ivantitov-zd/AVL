#pragma once
#ifndef _AVL_COPYVERTEXATTRIBS_H_
#define _AVL_COPYVERTEXATTRIBS_H_

#include "avl_vertexattribs.h"
#include "avl_copyvertexattrib.h"

void
avl_copyvertexattribs(const int srcGeometry;
	                  const int dstGeometry;
	                  const int srcVtxnum;
	                  const int dstVtxnum;
	                  const string mode)
{
    string attribs[] = avl_vertexattribs(srcGeometry);
    foreach (string attribName; attribs)
        avl_copyvertexattrib(srcGeometry, dstGeometry, srcVtxnum, dstVtxnum, attribName, mode);
}

void
avl_copyvertexattribs(const int srcGeometry;
	                  const int dstGeometry;
	                  const int srcVtxnum;
	                  const int dstVtxnum;
	                  const string mode;
	                  const string pattern)
{
    string attribs[] = avl_vertexattribs(srcGeometry);
    foreach (string attribName; attribs)
        if (match(pattern, attribName))
            avl_copyvertexattrib(srcGeometry, dstGeometry, srcVtxnum, dstVtxnum, attribName, mode);
}

#endif  // _AVL_COPYVERTEXATTRIBS_H_
