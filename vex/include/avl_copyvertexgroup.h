#pragma once
#ifndef _AVL_COPYVERTEXGROUP_H_
#define _AVL_COPYVERTEXGROUP_H_

int
avl_copyvertexgroup(const int geometry;
                    const int geohandle;
                    const int srcVtxnum;
                    const int dstVtxnum;
                    const string groupName;
                    const string mode)
{
    int value = invertexgroup(geometry, groupName, srcVtxnum);
    return setvertexgroup(geohandle, groupName, dstVtxnum, -1, value, mode);
}

#endif  // _AVL_COPYVERTEXGROUP_H_
