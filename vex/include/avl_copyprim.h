#pragma once
#ifndef _AVL_COPYPRIM_H_
#define _AVL_COPYPRIM_H_

#include "avl_primtype.h"
#include "avl_copypoint.h"
#include "avl_copyprimattribs.h"
#include "avl_copyprimgroups.h"

int
avl_copyprim(const int geohandle; const int primnum)
{
    int primitiveType = avl_primtype(geohandle, primnum);
    if (primitiveType != AVL_PRIMTYPE_POLY)  // Unsupported type of primitive
        return -1;
    int primitiveCopy;
    if (avl_isclosed(geohandle, primnum))
        primitiveCopy = addprim(geohandle, 'poly');
    else
        primitiveCopy = addprim(geohandle, 'polyline');
    int sourcePoints[] = primpoints(geohandle, primnum);
    int newPoint;
    for (int sourcePoint : sourcePoints)
    {
        newPoint = avl_copypoint(geohandle, sourcePoint);
        addvertex(geohandle, primitiveCopy, newPoint);
    }
    avl_copyprimattribs(geohandle, geohandle, primnum, primitiveCopy);
    avl_copyprimgroups(geohandle, geohandle, primnum, primitiveCopy);
    return primitiveCopy;
}

int
avl_copyprim(const int geometry;
             const int geohandle;
             const int primnum)
{
    int primitiveType = avl_primtype(geohandle, primnum);
    if (primitiveType != AVL_PRIMTYPE_POLY)  // Unsupported type of primitive
        return -1;
    int primitiveCopy;
    if (avl_isclosed(geohandle, primnum))
        primitiveCopy = addprim(geohandle, 'poly');
    else
        primitiveCopy = addprim(geohandle, 'polyline');
    int sourcePoints[] = primpoints(geohandle, primnum);
    int newPoint;
    for (int sourcePoint : sourcePoints)
    {
        newPoint = avl_copypoint(geometry,geohandle, sourcePoint);
        addvertex(geohandle, primitiveCopy, newPoint);
    }
    avl_copyprimattribs(geometry, geohandle, primnum, primitiveCopy);
    avl_copyprimgroups(geometry, geohandle, primnum, primitiveCopy);
    return primitiveCopy;
}

int
avl_copyprim(const string geometry;
             const int geohandle;
             const int primnum)
{
    int primitiveType = avl_primtype(geohandle, primnum);
    if (primitiveType != AVL_PRIMTYPE_POLY)  // Unsupported type of primitive
        return -1;
    int primitiveCopy;
    if (avl_isclosed(geohandle, primnum))
        primitiveCopy = addprim(geohandle, 'poly');
    else
        primitiveCopy = addprim(geohandle, 'polyline');
    int sourcePoints[] = primpoints(geohandle, primnum);
    int newPoint;
    for (int sourcePoint : sourcePoints)
    {
        newPoint = avl_copypoint(geometry,geohandle, sourcePoint);
        addvertex(geohandle, primitiveCopy, newPoint);
    }
    avl_copyprimattribs(geometry, geohandle, primnum, primitiveCopy);
    avl_copyprimgroups(geometry, geohandle, primnum, primitiveCopy);
    return primitiveCopy;
}

#endif  // _AVL_COPYPRIM_H_
