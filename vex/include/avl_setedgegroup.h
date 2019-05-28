#pragma once
#ifndef _avl_setedgegroup_
#define _avl_setedgegroup_

int
avl_setedgegroup(const int dstGeometry;
                 const string groupName;
                 const int srcEdgePoint;
                 const int dstEdgePoint;
                 const int value;
                 const string mode)
{
    if (mode == 'set')
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, srcValue);
    int srcValue = inedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint);
    if (mode == 'toggle')
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, 1 - srcValue);
    if (startswith(mode, 'min'))
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, min(srcValue, value));
    if (startswith(mode, 'max'))
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, max(srcValue, value));
    if (startswith(mode, 'mult'))
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, srcValue * value);
}

#endif
