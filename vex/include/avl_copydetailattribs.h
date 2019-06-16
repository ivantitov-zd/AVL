#pragma once
#ifndef _AVL_COPYDETAILATTRIBS_H_
#define _AVL_COPYDETAILATTRIBS_H_

#include "avl_detailattribs.h"
#include "avl_copydetailattrib.h"

void
avl_copydetailattribs(const int geometry;
                      const int geohandle;
                      const string mode)
{
    string attribs[] = avl_detailattribs(geometry);
    for (string attribName : attribs)
        avl_copydetailattrib(geometry, geohandle, attribName, mode);
}

void
avl_copydetailattribs(const int geometry;
                      const int geohandle;
                      const string mode;
                      const string pattern)
{
    string attribs[] = avl_detailattribs(geometry);
    for (string attribName : attribs)
        if (match(pattern, attribName))
            avl_copydetailattrib(geometry, geohandle, attribName, mode);
}

#endif  // _AVL_COPYDETAILATTRIBS_H_
