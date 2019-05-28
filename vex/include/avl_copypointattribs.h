#pragma once
#ifndef _avl_copypointattribs_
#define _avl_copypointattribs_

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

#endif
