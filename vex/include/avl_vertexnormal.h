#pragma once
#ifndef _AVL_VERTEXNORMAL_H_
#define _AVL_VERTEXNORMAL_H_

#include "avl_angle.h"

vector
avl_vertexnormal(const int geometry;
                 const int primnum;
                 const int vtxnum;
                 const float cuspAngle)
{
    int vtxPoint, vtxPrim;
    if (primnum == -1)
    {
        vtxPoint = vertexpoint(geometry, vtxnum);
        vtxPrim = vertexprim(geometry, vtxnum);
    }
    else
    {
        int linearVtxnum = vertexindex(geometry, primnum, vtxnum);
        vtxPoint = vertexpoint(geometry, linearVtxnum);
        vtxPrim = vertexprim(geometry, linearVtxnum);
    }
    int primitives[] = pointprims(geometry, vtxPoint);
    vector vtxPrimNormal = prim_normal(geometry, vtxPrim, 0.5, 0.5);
    if (len(primitives) == 1)
        return vtxPrimNormal;
    vector normals = vtxPrimNormal;
    int count = 1;
    vector normal;
    for (int primitive : primitives)
    {
        if (primitive == vtxPrim)
            continue;
        normal = prim_normal(geometry, primitive, 0.5, 0.5);
        if (degrees(avl_angle(normal, vtxPrimNormal)) <= cuspAngle)
        {
            normals += normal;
            ++count;
        }
    }
    return normalize(normals / count);
}

vector
avl_vertexnormal(const int geometry;
                 const int primnum;
                 const int vtxnum)
{
    return avl_vertexnormal(geometry, primnum, vtxnum, 60);
}

#endif  // _AVL_VERTEXNORMAL_H_
