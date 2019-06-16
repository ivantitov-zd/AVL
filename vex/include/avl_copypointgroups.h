#pragma once
#ifndef _AVL_COPYPOINTGROUPS_H_
#define _AVL_COPYPOINTGROUPS_H_

#include "avl_pointgroups.h"
#include "avl_copypointgroup.h"

void
avl_copypointgroups(const int geometry;
	                const int geohandle;
	                const int srcPtnum;
	                const int dstPtnum;
	                const string mode)
{
    string groups[] = avl_pointgroups(geometry);
    for (string groupName : groups)
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
    string groups[] = avl_pointgroups(geometry);
    for (string groupName : groups)
        if (match(pattern, groupName))
            avl_copypointgroup(geometry, geohandle, srcPtnum, dstPtnum, groupName, mode);
}

#endif  // _AVL_COPYPOINTGROUPS_H_
