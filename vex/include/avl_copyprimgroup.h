#pragma once
#ifndef _AVL_COPYPRIMGROUP_H_
#define _AVL_COPYPRIMGROUP_H_

int
avl_copyprimgroup(const int srcGeometry;
                  const int dstGeometry;
                  const int srcPrimnum;
                  const int dstPrimnum;
                  const string groupName;
                  const string mode)
{
    int value = inprimgroup(srcGeometry, groupName, srcPrimnum);
    return setprimgroup(dstGeometry, groupName, dstPrimnum, value, mode);
}

#endif  // _AVL_COPYPRIMGROUP_H_
