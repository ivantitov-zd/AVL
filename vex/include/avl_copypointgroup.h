#pragma once
#ifndef _avl_copypointgroup_
#define _avl_copypointgroup_

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

#endif
