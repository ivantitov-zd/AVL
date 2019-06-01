#pragma once
#ifndef _AVL_COPYPRIMATTRIBS_H_
#define _AVL_COPYPRIMATTRIBS_H_

#include "avl_primattribs.h"
#include "avl_copyprimattrib.h"

void
avl_copyprimattribs(const int srcGeometry;
	                const int dstGeometry;
	                const int srcPrimnum;
	                const int dstPrimnum;
	                const string mode)
{
    string attribs[] = avl_primattribs(srcGeometry);
    foreach (string attribName; attribs)
        avl_copyprimattrib(srcGeometry, dstGeometry, srcPrimnum, dstPrimnum, attribName, mode);
}

void
avl_copyprimattribs(const int srcGeometry;
	                const int dstGeometry;
	                const int srcPrimnum;
	                const int dstPrimnum;
	                const string mode;
	                const string pattern)
{
    string attribs[] = avl_primattribs(srcGeometry);
    foreach (string attribName; attribs)
        if (match(pattern, attribName))
            avl_copyprimattrib(srcGeometry, dstGeometry, srcPrimnum, dstPrimnum, attribName, mode);
}

#endif  // _AVL_COPYPRIMATTRIBS_H_
