#pragma once
#ifndef _AVL_COPYPOINTATTRIBS_H_
#define _AVL_COPYPOINTATTRIBS_H_

#include "avl_pointattribs.h"
#include "avl_copypointattrib.h"

void
avl_copypointattribs(const int geometry;
	                 const int geohandle;
	                 const int srcPtnum;
	                 const int dstPtnum;
	                 const string mode)
{
    string attribs[] = avl_pointattribs(geometry);
    for (string attribName : attribs)
        avl_copypointattrib(geometry, geohandle, srcPtnum, dstPtnum, attribName, mode);
}

void
avl_copypointattribs(const int geometry;
	                 const int geohandle;
	                 const int srcPtnum;
	                 const int dstPtnum;
	                 const string mode;
	                 const string pattern)
{
    string attribs[] = avl_pointattribs(geometry);
    for (string attribName : attribs)
        if (match(pattern, attribName))
            avl_copypointattrib(geometry, geohandle, srcPtnum, dstPtnum, attribName, mode);
}

#endif  // _AVL_COPYPOINTATTRIBS_H_
