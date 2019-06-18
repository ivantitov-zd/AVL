#pragma once
#ifndef _AVL_COPYPRIMGROUP_H_
#define _AVL_COPYPRIMGROUP_H_

int
avl_copyprimgroup(const int geometry;
                  const int geohandle;
                  const int srcPrimnum;
                  const int dstPrimnum;
                  const string groupName)
{
    int value = inprimgroup(geometry, groupName, srcPrimnum);
    return setprimgroup(geohandle, groupName, dstPrimnum, value);
}

int
avl_copyprimgroup(const int geometry;
                  const int geohandle;
                  const int srcPrimnum;
                  const int dstPrimnum;
                  const string groupName;
                  const string mode)
{
    int value = inprimgroup(geometry, groupName, srcPrimnum);
    return setprimgroup(geohandle, groupName, dstPrimnum, value, mode);
}

#endif  // _AVL_COPYPRIMGROUP_H_
