#pragma once
#ifndef _AVL_SETEDGEGROUP_H_
#define _AVL_SETEDGEGROUP_H_

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
    if (mode == 'min' || mode == 'minimum')
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, min(srcValue, value));
    if (mode == 'max' || mode == 'maximum')
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, max(srcValue, value));
    if (mode == 'mult' || mode == 'multiply')
        return setedgegroup(dstGeometry, groupName, srcEdgePoint, dstEdgePoint, srcValue * value);
}

#endif  // _AVL_SETEDGEGROUP_H_
