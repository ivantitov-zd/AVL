#pragma once
#ifndef _AVL_TRIVOLUME_H_
#define _AVL_TRIVOLUME_H_

float
avl_trivolume(const vector origin;
              const vector vertex1;
              const vector vertex2;
              const vector vertex3)
{
    vector edge1 = origin - vertex1;
    vector edge2 = origin - vertex2;
    vector edge3 = origin - vertex3;
    return abs(determinant(set(edge1, edge2, edge3))) / 6.0;
}

float
avl_trivolume(const vector origin; const vector vertices[])
{
    // Todo (1.0): Triangle check
    vector edge1 = origin - vertices[0];
    vector edge2 = origin - vertices[1];
    vector edge3 = origin - vertices[2];
    return abs(determinant(set(edge1, edge2, edge3))) / 6.0;
}

// Todo (?): float avl_trivolume(<geometry>; vector origin; int point1; int point2; int point3)

// Todo (?): float avl_trivolume(<geometry>; int origin; int point1; int point2; int point3)

#endif  // _AVL_TRIVOLUME_H_
