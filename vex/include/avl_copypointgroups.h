#pragma once
#ifndef _AVL_COPYPOINTGROUPS_H_
#define _AVL_COPYPOINTGROUPS_H_

#include "avl_pointgroups.h"
#include "avl_copypointgroup.h"

void
avl_copypointgroups(const int geometry;
                    const int geohandle;
                    const int srcPtnum;
                    const int dstPtnum)
{
    for (string groupName : avl_pointgroups(geometry))
        avl_copypointgroup(geometry, geohandle, srcPtnum, dstPtnum, groupName);
}

void
avl_copypointgroups(const int geometry;
                    const int geohandle;
                    const int srcPtnum;
                    const int dstPtnum;
                    const string mode)
{
    for (string groupName : avl_pointgroups(geometry))
        avl_copypointgroup(geometry, geohandle, srcPtnum, dstPtnum, groupName, mode);
}

void
avl_copypointgroups(const int geometry;
                    const int geohandle;
                    const int srcPtnum;
                    const int dstPtnum;
                    const string pattern;
                    const string mode)
{
    for (string groupName : avl_pointgroups(geometry))
        if (match(pattern, groupName))
            avl_copypointgroup(geometry, geohandle, srcPtnum, dstPtnum, groupName, mode);
}

#endif  // _AVL_COPYPOINTGROUPS_H_
