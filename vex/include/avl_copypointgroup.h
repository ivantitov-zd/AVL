#pragma once
#ifndef _AVL_COPYPOINTGROUP_H_
#define _AVL_COPYPOINTGROUP_H_

int
avl_copypointgroup(const int srcGeometry;
                   const int dstGeometry;
                   const int srcPtnum;
                   const int dstPtnum;
                   const string groupName;
                   const string mode)
{
    int value = inpointgroup(srcGeometry, groupName, srcPtnum);
    return setpointgroup(dstGeometry, groupName, dstPtnum, value, mode);
}

#endif  // _AVL_COPYPOINTGROUP_H_
