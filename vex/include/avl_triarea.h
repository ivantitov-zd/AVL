#pragma once
#ifndef _AVL_TRIAREA_H_
#define _AVL_TRIAREA_H_

float
avl_triarea(const vector2 vertex1;
            const vector2 vertex2;
            const vector2 vertex3)
{
    return abs((vertex2.x - vertex1.x) * (vertex3.y - vertex1.y) -
               (vertex3.x - vertex1.x) * (vertex2.y - vertex1.y)) * 0.5;
}

float
avl_triarea(const vector2 vertices[])
{
    if (len(vertices) != 3)
        return 0;  // Not triangle // Todo (1.0): Error
    return abs((vertices[1].x - vertices[0].x) * (vertices[2].y - vertices[0].y) -
               (vertices[2].x - vertices[0].x) * (vertices[1].y - vertices[0].y)) * 0.5;
}

float
avl_triarea(const vector vertex1;
            const vector vertex2;
            const vector vertex3)
{
    vector edge1 = vertex1 - vertex2;
    vector edge2 = vertex1 - vertex3;
    return length(cross(edge1, edge2)) * 0.5;
}

float
avl_triarea(const vector vertices[])
{
    if (len(vertices) != 3)
        return 0;  // Not triangle // Todo (1.0): Error
    vector edge1 = vertices[0] - vertices[1];
    vector edge2 = vertices[0] - vertices[2];
    return length(cross(edge1, edge2)) * 0.5;
}

// Todo (1.0): float avl_triarea(<geometry>; int point1; int point2; int point3)

#endif  // _AVL_TRIAREA_H_
