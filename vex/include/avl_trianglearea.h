#pragma once
#ifndef _avl_trianglearea_
#define _avl_trianglearea_

float
avl_trianglearea(const vector2 vertex1;
                 const vector2 vertex2;
                 const vector2 vertex3)
{
    return abs((vertex2.x - vertex1.x) * (vertex3.y - vertex1.y) -
               (vertex3.x - vertex1.x) * (vertex2.y - vertex1.y)) * 0.5;
}

float
avl_trianglearea(const vector2 vertices[])
{
    if (len(vertices) != 3)
        return 0.0;  // Not triangle
    return abs((vertices[1] - vertices[0]) * (vertices[2] - vertices[0]) -
               (vertices[2] - vertices[0]) * (vertices[1] - vertices[0])) * 0.5;
}

float
avl_trianglearea(const vector vertex1;
                 const vector vertex2;
                 const vector vertex3)
{
    vector edge1 = vertex1 - vertex2;
    vector edge2 = vertex1 - vertex3;
    return length(cross(edge1, edge2)) * 0.5;
}

float
avl_trianglearea(const vector vertices[])
{
    if (len(vertices) != 3)
        return 0.0;  // Not triangle
    vector edge1 = vertices[0] - vertices[1];
    vector edge2 = vertices[0] - vertices[2];
    return length(cross(edge1, edge2)) * 0.5;
}

#endif
