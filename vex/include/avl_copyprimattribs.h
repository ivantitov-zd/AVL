#pragma once
#ifndef _AVL_COPYPRIMATTRIBS_H_
#define _AVL_COPYPRIMATTRIBS_H_

#include "avl_primattribs.h"
#include "avl_copyprimattrib.h"

void
avl_copyprimattribs(const int geometry;
                    const int geohandle;
                    const int srcPrimnum;
                    const int dstPrimnum;
                    const string mode)
{
    string attribs[] = avl_primattribs(geometry);
    for (string attribName : attribs)
        avl_copyprimattrib(geometry, geohandle, srcPrimnum, dstPrimnum, attribName, mode);
}

void
avl_copyprimattribs(const int geometry;
                    const int geohandle;
                    const int srcPrimnum;
                    const int dstPrimnum;
                    const string mode;
                    const string pattern)
{
    string attribs[] = avl_primattribs(geometry);
    for (string attribName : attribs)
        if (match(pattern, attribName))
            avl_copyprimattrib(geometry, geohandle, srcPrimnum, dstPrimnum, attribName, mode);
}

#endif  // _AVL_COPYPRIMATTRIBS_H_
