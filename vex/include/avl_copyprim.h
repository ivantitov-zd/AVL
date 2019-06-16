#pragma once
#ifndef _AVL_COPYPRIM_H_
#define _AVL_COPYPRIM_H_

#include "avl_primtype.h"
#include "avl_primtypename.h"
#include "avl_copyprimattribs.h"
#include "avl_copyprimgroups.h"

int
avl_copyprim(int geohandle; int primnum)
{
    int primitiveType = avl_primtype(geohandle, primnum);
    if (primitiveType != 1)  // Unknown type of primitive
        return -1;
    int newPrimitive = addprim(geohandle, 'poly');
    int sourcePoints[] = primpoints(geohandle, primnum);
    int newPoint;
    for (int i = 0; i < len(sourcePoints); ++i)
    {
        newPoint = addpoint(geohandle, sourcePoints[i]);
        addvertex(geohandle, newPrimitive, newPoint);
    }
    avl_copyprimattribs(geohandle, geohandle, primnum, newPrimitive, 'set');
    avl_copyprimgroups(geohandle, geohandle, primnum, newPrimitive, 'set');
    return newPrimitive;
}

#endif  // _AVL_COPYPRIM_H_
