#pragma once
#ifndef _avl_copyvertexgroup_
#define _avl_copyvertexgroup_

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

#endif
