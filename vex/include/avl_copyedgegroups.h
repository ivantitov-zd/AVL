#pragma once
#ifndef _avl_copyedgegroups_
#define _avl_copyedgegroups_

#include "avl_edgegroups.h"
#include "avl_copyedgegroup.h"

void
avl_copyedgegroups(const int srcGeometry;
                   const int dstGeometry;
                   const int srcPtnum0;
                   const int srcPtnum1;
                   const int dstPtnum0;
                   const int dstPtnum1;
                   const string mode)
{
    string groups[] = avl_edgegroups(srcGeometry);
    foreach (string groupName; groups)
        avl_copyedgegroup(srcGeometry, dstGeometry, srcPtnum0, srcPtnum1, dstPtnum0, dstPtnum1, groupName, mode);
}

void
avl_copyedgegroups(const int srcGeometry;
                   const int dstGeometry;
                   const int srcPtnum0;
                   const int srcPtnum1;
                   const int dstPtnum0;
                   const int dstPtnum1;
                   const string mode;
                   const string pattern)
{
    string groups[] = avl_edgegroups(srcGeometry);
    foreach (string groupName; groups)
        if (match(pattern, groupName))
            avl_copyedgegroup(srcGeometry, dstGeometry, srcPtnum0, srcPtnum1, dstPtnum0, dstPtnum1, groupName, mode);
}

#endif
