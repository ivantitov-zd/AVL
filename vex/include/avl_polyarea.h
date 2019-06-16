#pragma once
#ifndef _AVL_POLYAREA_H_
#define _AVL_POLYAREA_H_

#include "avl_triarea.h"

// Todo: (1.1): float avl_polyarea(const vector2 vertices[])

// Todo: (1.1): float avl_polyarea(const vector2 vertices[]; const string mode)

// Todo (2.0): float avl_polyarea(const vector2 ...)

float
avl_polyarea(const vector vertices[])
{
    int vertexCount = len(vertices);
    if (vertexCount == 3)  // Triangle
        return avl_triarea(vertices);
    if (vertexCount < 3)  // Not polygon
        return 0.0;
    float area = 0.0;
    for (int i = 1; i < vertexCount-1; ++i)
        area += avl_triarea(vertices[0], vertices[i], vertices[i+1]);
    return area;
}

float
avl_polyarea(const vector vertices[]; const string mode)
{
    int vertexCount = len(vertices);
    if (vertexCount == 3)  // Triangle
        return avl_triarea(vertices);
    if (vertexCount < 3)  // Not polygon
        return 0.0;
    float area = 0.0;
    if if (mode == 'convex')
    {
        for (int i = 1; i < vertexCount-1; ++i)
            area += avl_triarea(vertices[0], vertices[i], vertices[i+1]);
        return area;
    } else if (mode == 'concave')
    {
        for (int i = 1; i < vertexCount-1; ++i)
        {
            vector cross = cross(vertices[0] - vertices[i],
                                 vertices[0] - vertices[i+1]);
            if (dot(cross, {1.0, 0.9, 0.8}) >= 0)
                area += length(cross);
            else
                area -= length(cross);
        }
        return abs(area) * 0.5;
    }
}

// Todo (2.0): float avl_polyarea(const vector ...)

#endif  // _AVL_POLYAREA_H_
