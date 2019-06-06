#pragma once
#ifndef _AVL_TRIANGLEPERIMETER_H_
#define _AVL_TRIANGLEPERIMETER_H_

float
avl_triangleperimeter(const vector2 vertex1;
                      const vector2 vertex2;
                      const vector2 vertex3)
{
    return distance(vertex1, vertex2) +
           distance(vertex2, vertex3) +
           distance(vertex3, vertex1);
}

float
avl_triangleperimeter(const vector2 vertices[])
{
    // Todo (1.0): Triangle check
    return distance(vertices[0], vertices[1]) +
           distance(vertices[1], vertices[2]) +
           distance(vertices[2], vertices[0]);
}

float
avl_triangleperimeter(const vector vertex1;
                      const vector vertex2;
                      const vector vertex3)
{
    return distance(vertex1, vertex2) +
           distance(vertex2, vertex3) +
           distance(vertex3, vertex1);
}

float
avl_triangleperimeter(const vector vertices[])
{
    // Todo (1.0): Triangle check
    return distance(vertices[0], vertices[1]) +
           distance(vertices[1], vertices[2]) +
           distance(vertices[2], vertices[0]);
}

// Todo (?): float avl_triangleperimeter(<geometry>; int point1; int point2; int point3)

#endif  // _AVL_TRIANGLEPERIMETER_H_
