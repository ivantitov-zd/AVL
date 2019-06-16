#pragma once
#ifndef _AVL_COPYEDGEGROUPS_H_
#define _AVL_COPYEDGEGROUPS_H_

#include "avl_edgegroups.h"
#include "avl_copyedgegroup.h"

void
avl_copyedgegroups(const int geometry;
                   const int geohandle;
                   const int srcPtnum0;
                   const int srcPtnum1;
                   const int dstPtnum0;
                   const int dstPtnum1;
                   const string mode)
{
    string groups[] = avl_edgegroups(geometry);
    for (string groupName : groups)
        avl_copyedgegroup(geometry, geohandle, srcPtnum0, srcPtnum1, dstPtnum0, dstPtnum1, groupName, mode);
}

void
avl_copyedgegroups(const int geometry;
                   const int geohandle;
                   const int srcPtnum0;
                   const int srcPtnum1;
                   const int dstPtnum0;
                   const int dstPtnum1;
                   const string mode;
                   const string pattern)
{
    string groups[] = avl_edgegroups(geometry);
    for (string groupName : groups)
        if (match(pattern, groupName))
            avl_copyedgegroup(geometry, geohandle, srcPtnum0, srcPtnum1, dstPtnum0, dstPtnum1, groupName, mode);
}

#endif  // _AVL_COPYEDGEGROUPS_H_
