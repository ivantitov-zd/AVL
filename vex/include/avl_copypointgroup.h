#pragma once
#ifndef _AVL_COPYPOINTGROUP_H_
#define _AVL_COPYPOINTGROUP_H_

int
avl_copypointgroup(const int geometry;
                   const int geohandle;
                   const int srcPtnum;
                   const int dstPtnum;
                   const string groupName;
                   const string mode)
{
    int value = inpointgroup(geometry, groupName, srcPtnum);
    return setpointgroup(geohandle, groupName, dstPtnum, value, mode);
}

#endif  // _AVL_COPYPOINTGROUP_H_
