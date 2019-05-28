#pragma once
#ifndef _avl_copyprimgroup_
#define _avl_copyprimgroup_

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

#endif
