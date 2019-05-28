#pragma once
#ifndef _avl_copypointgroups_
#define _avl_copypointgroups_

#include "avl_pointgroups.h"
#include "avl_copypointgroup.h"

void
avl_copypointgroups(const int srcGeometry;
	                const int dstGeometry;
	                const int srcPtnum;
	                const int dstPtnum;
	                const string mode)
{
    string groups[] = avl_pointgroups(srcGeometry);
    foreach (string groupName; groups)
        avl_copypointgroup(srcGeometry, dstGeometry, srcPtnum, dstPtnum, groupName, mode);
}

void
avl_copypointgroups(const int srcGeometry;
	                const int dstGeometry;
	                const int srcPtnum;
	                const int dstPtnum;
	                const string pattern;
	                const string mode)
{
    string groups[] = avl_pointgroups(srcGeometry);
    foreach (string groupName; groups)
        if (match(pattern, groupName))
            avl_copypointgroup(srcGeometry, dstGeometry, srcPtnum, dstPtnum, groupName, mode);
}

#endif
