#pragma once
#ifndef _AVL_POLYPERIMETER_H_
#define _AVL_POLYPERIMETER_H_

float
avl_polyperimeter(const vector2 vertices[])
{
    float perimeter = 0;
    for (int v = len(vertices)-2; v >= -1; --v)
        perimeter += distance(vertices[v], vertices[v+1]);
    return perimeter;
}

// Todo (2.0): float avl_polyperimeter(const vector2 ...)

float
avl_polyperimeter(const vector vertices[])
{
    float perimeter = 0;
    for (int v = len(vertices)-2; v >= -1; --v)
        perimeter += distance(vertices[v], vertices[v+1]);
    return perimeter;
}

// Todo (?): float avl_polyperimeter(<geometry>; const int points[])

// Todo (?2.0): float avl_polyperimeter(const int ...)

// Todo (2.0): float avl_polyperimeter(const vector ...)

#endif  // _AVL_POLYPERIMETER_H_
