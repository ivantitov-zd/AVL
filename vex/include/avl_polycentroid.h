#pragma once
#ifndef _AVL_POLYCENTROID_H_
#define _AVL_POLYCENTROID_H_

#include "avl_tricentroid.h"
#include "avl_triarea.h"
#include "avl_polyperimeter.h"

// Todo: optimize

// Todo (1.0): vector2 avl_polycentroid(const vector2[])

// Todo (1.0): vector2 avl_polycentroid(const vector2[]; const string mode)

// Todo (1.0): vector avl_polycentroid(const vector[])

// Todo (2.0): vector2 avl_polycentroid(const vector2 ...)

vector
avl_polycentroid(const vector vertices[]; const string mode)
{
    int vertexCount = len(vertices);
    if (vertexCount == 3)  // Triangle
        return avl_tricentroid(vertices);
    if (vertexCount < 3)  // Not polygon
        return {0.0, 0.0, 0.0};
    if (mode == 'corners')
        return avg(vertices);
    else if (mode == 'edges')
    {
        vector centroid = {0.0, 0.0, 0.0};
        float perimeter2 = avl_polyperimeter(vertices);//
        vector pos1, pos2;
        for (int i = 0; i < vertexCount; ++i)
        {
            pos1 = vertices[i-1];
            pos2 = vertices[i];
            centroid += ((pos1 + pos2) / 2) * (distance2(pos1, pos2) / perimeter2);
        }
        return centroid;
    } else if (mode == 'areas')
    {
        vector centroid = {0.0, 0.0, 0.0};
        float area = avl_polyarea(0, 0);//
        vector pos0 = vertices[0];
        vector pos1, pos2;
        for (int i = 1; i < vertexCount-1; ++i)
        {
            pos1 = vertices[i];
            pos2 = vertices[i+1];
            vector cross = cross(pos0-pos1, pos0-pos2);
            if (dot(cross, {1.0, 0.9, 0.8}) >= 0.0)
                centroid += avl_tricentroid(pos0, pos1, pos2) *
                            (avl_triarea(pos0, pos1, pos2) / area);
            else
                centroid -= avl_tricentroid(pos0, pos1, pos2) *
                            (avl_triarea(pos0, pos1, pos2) / area);
        }
        return abs(centroid);
    } else
    {
        error('Polygon Centroid AVL: Unknown mode ' + mode);
        return {0.0, 0.0, 0.0};
    }
}

// Todo (2.0): vector avl_polycentroid(const vector ...)

#endif  // _AVL_POLYCENTROID_H_
