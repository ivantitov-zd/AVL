#pragma once
#ifndef _AVL_TRINORMAL_H_
#define _AVL_TRINORMAL_H_

vector
avl_trinormal(const vector vertex1;
              const vector vertex2;
              const vector vertex3)
{
    vector edge1 = vertex1 - vertex2;
    vector edge2 = vertex3 - vertex2;
    return normalize(cross(edge1, edge2));
}

vector
avl_trinormal(const vector vertices[])
{
    // Todo (1.0): Triangle check
    vector edge1 = vertices[0] - vertices[1];
    vector edge2 = vertices[2] - vertices[1];
    return normalize(cross(edge1, edge2));
}

// Todo (1.0): float avl_trinormal(<geometry>; int point1; int point2; int point3)

#endif  // _AVL_TRINORMAL_H_
