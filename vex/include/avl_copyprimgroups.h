#pragma once
#ifndef _AVL_COPYPRIMGROUPS_H_
#define _AVL_COPYPRIMGROUPS_H_

#include "avl_primgroups.h"
#include "avl_copyprimgroup.h"

void
avl_copyprimgroups(const int geometry;
                   const int geohandle;
                   const int srcPrimnum;
                   const int dstPrimnum)
{
    for (string groupName : avl_primgroups(geometry))
        avl_copyprimgroup(geometry, geohandle, srcPrimnum, dstPrimnum, groupName);
}

void
avl_copyprimgroups(const int geometry;
                   const int geohandle;
                   const int srcPrimnum;
                   const int dstPrimnum;
                   const string mode)
{
    for (string groupName : avl_primgroups(geometry))
        avl_copyprimgroup(geometry, geohandle, srcPrimnum, dstPrimnum, groupName, mode);
}

void
avl_copyprimgroups(const int geometry;
                   const int geohandle;
                   const int srcPrimnum;
                   const int dstPrimnum;
                   const string mode;
                   const string pattern)
{
    for (string groupName : avl_primgroups(geometry))
        if (match(pattern, groupName))
            avl_copyprimgroup(geometry, geohandle, srcPrimnum, dstPrimnum, groupName, mode);
}

#endif  // _AVL_COPYPRIMGROUPS_H_
