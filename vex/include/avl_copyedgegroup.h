#pragma once
#ifndef _AVL_COPYEDGEGROUP_H_
#define _AVL_COPYEDGEGROUP_H_

#include "avl_setedgegroup.h"

int
avl_copyedgegroup(const int geometry;
                  const int geohandle;
                  const int srcPtnum0;
                  const int srcPtnum1;
                  const int dstPtnum0;
                  const int dstPtnum1;
                  const string groupName)
{
    int value = inedgegroup(geometry, groupName, srcPtnum0, srcPtnum1);
    return setedgegroup(geohandle, groupName, dstPtnum0, dstPtnum1, value);
}

int
avl_copyedgegroup(const int geometry;
                  const int geohandle;
                  const int srcPtnum0;
                  const int srcPtnum1;
                  const int dstPtnum0;
                  const int dstPtnum1;
                  const string groupName;
                  const string mode)
{
    int value = inedgegroup(geometry, groupName, srcPtnum0, srcPtnum1);
    return avl_setedgegroup(geohandle, groupName, dstPtnum0, dstPtnum1, value, mode);
}

#endif  // _AVL_COPYEDGEGROUP_H_
