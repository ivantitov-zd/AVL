#pragma once
#ifndef _avl_copyprimgroups_
#define _avl_copyprimgroups_

#include "avl_primgroups.h"
#include "avl_copyprimgroup.h"

void
avl_copyprimgroups(const int srcGeometry;
	               const int dstGeometry;
	               const int srcPrimnum;
	               const int dstPrimnum;
	               const string mode)
{
    string groups[] = avl_primgroups(srcGeometry);
    foreach (string groupName; groups)
        avl_copyprimgroup(srcGeometry, dstGeometry, srcPrimnum, dstPrimnum, groupName, mode);
}

void
avl_copyprimgroups(const int srcGeometry;
	               const int dstGeometry;
	               const int srcPrimnum;
	               const int dstPrimnum;
	               const string mode;
	               const string pattern)
{
    string groups[] = avl_primgroups(srcGeometry);
    foreach (string groupName; groups)
        if (match(pattern, groupName))
            avl_copyprimgroup(srcGeometry, dstGeometry, srcPrimnum, dstPrimnum, groupName, mode);
}

#endif
