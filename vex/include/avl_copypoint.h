#pragma once
#ifndef _AVL_COPYPOINT_H_
#define _AVL_COPYPOINT_H_

#include "avl_copypointattribs.h"
#include "avl_copypointgroups.h"

int
avl_copypoint(const int geohandle; const int ptnum)  // For compatibility with avl_copyprim
{
    return addpoint(geohandle, ptnum);
}

int
avl_copypoint(const int geometry;
              const int geohandle;
              const int ptnum)
{
    int pointCopy = addpoint(geohandle, {0, 0, 0});
    avl_copypointattribs(geometry, geohandle, ptnum, pointCopy);
    avl_copypointgroups(geometry, geohandle, ptnum, pointCopy);
    return pointCopy;
}

int
avl_copypoint(const string geometry;
              const int geohandle;
              const int ptnum)
{
    int pointCopy = addpoint(geohandle, {0, 0, 0});
    avl_copypointattribs(geometry, geohandle, ptnum, pointCopy);
    avl_copypointgroups(geometry, geohandle, ptnum, pointCopy);
    return pointCopy;
}

#endif  // _AVL_COPYPOINT_H_
