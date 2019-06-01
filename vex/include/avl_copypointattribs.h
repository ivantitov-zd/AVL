#pragma once
#ifndef _AVL_COPYPOINTATTRIBS_H_
#define _AVL_COPYPOINTATTRIBS_H_

#include "avl_pointattribs.h"
#include "avl_copypointattrib.h"

void
avl_copypointattribs(const int srcGeometry;
	                 const int dstGeometry;
	                 const int srcPtnum;
	                 const int dstPtnum;
	                 const string mode)
{
    string attribs[] = avl_pointattribs(srcGeometry);
    foreach (string attribName; attribs)
        avl_copypointattrib(srcGeometry, dstGeometry, srcPtnum, dstPtnum, attribName, mode);
}

void
avl_copypointattribs(const int srcGeometry;
	                 const int dstGeometry;
	                 const int srcPtnum;
	                 const int dstPtnum;
	                 const string mode;
	                 const string pattern)
{
    string attribs[] = avl_pointattribs(srcGeometry);
    foreach (string attribName; attribs)
        if (match(pattern, attribName))
            avl_copypointattrib(srcGeometry, dstGeometry, srcPtnum, dstPtnum, attribName, mode);
}

#endif  // _AVL_COPYPOINTATTRIBS_H_
