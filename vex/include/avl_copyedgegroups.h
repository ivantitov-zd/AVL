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
                   const int dstPtnum1)
{
    for (string groupName : avl_edgegroups(geometry))
        avl_copyedgegroup(geometry, geohandle,
                          srcPtnum0, srcPtnum1,
                          dstPtnum0, dstPtnum1,
                          groupName);
}

void
avl_copyedgegroups(const int geometry;
                   const int geohandle;
                   const int srcPtnum0;
                   const int srcPtnum1;
                   const int dstPtnum0;
                   const int dstPtnum1;
                   const string mode)
{
    for (string groupName : avl_edgegroups(geometry))
        avl_copyedgegroup(geometry, geohandle,
                          srcPtnum0, srcPtnum1,
                          dstPtnum0, dstPtnum1,
                          groupName, mode);
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
    for (string groupName : avl_edgegroups(geometry))
        if (match(pattern, groupName))
            avl_copyedgegroup(geometry, geohandle,
                              srcPtnum0, srcPtnum1,
                              dstPtnum0, dstPtnum1,
                              groupName, mode);
}

#endif  // _AVL_COPYEDGEGROUPS_H_
