#pragma once
#ifndef _AVL_COPYVERTEXGROUP_H_
#define _AVL_COPYVERTEXGROUP_H_

int
avl_copyvertexgroup(const int srcGeometry;
                    const int dstGeometry;
                    const int srcVtxnum;
                    const int dstVtxnum;
                    const string groupName;
                    const string mode)
{
    int value = invertexgroup(srcGeometry, groupName, srcVtxnum);
    return setvertexgroup(dstGeometry, groupName, dstVtxnum, -1, value, mode);
}

#endif  // _AVL_COPYVERTEXGROUP_H_
