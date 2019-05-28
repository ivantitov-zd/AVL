#pragma once
#ifndef _avl_copydetailattribs_
#define _avl_copydetailattribs_

#include "avl_detailattribs.h"
#include "avl_copydetailattrib.h"

void
avl_copydetailattribs(const int srcGeometry;
	                  const int dstGeometry;
	                  const string mode)
{
    string attribs[] = avl_detailattribs(srcGeometry);
    foreach (string attribName; attribs)
        avl_copydetailattrib(srcGeometry, dstGeometry, attribName, mode);
}

void
avl_copydetailattribs(const int srcGeometry;
	                  const int dstGeometry;
	                  const string mode;
	                  const string pattern)
{
    string attribs[] = avl_detailattribs(srcGeometry);
    foreach (string attribName; attribs)
        if (match(pattern, attribName))
            avl_copydetailattrib(srcGeometry, dstGeometry, attribName, mode);
}

#endif
