#pragma once
#ifndef _AVL_TRIANGLECENTROID_H_
#define _AVL_TRIANGLECENTROID_H_

vector2
avl_trianglecentroid(const vector2 vertex1;
                     const vector2 vertex2;
                     const vector2 vertex3)
{
    return (vertex1 + vertex2 + vertex3) / 3.0;
}

vector2
avl_trianglecentroid(const vector2 vertices[])
{
    // Todo (1.0): Triangle check
    return (vertices[0] + vertices[1] + vertices[2]) / 3.0;
}

vector
avl_trianglecentroid(const vector vertex1;
                     const vector vertex2;
                     const vector vertex3)
{
    return (vertex1 + vertex2 + vertex3) / 3.0;
}

vector
avl_trianglecentroid(const vector vertices[])
{
    // Todo (1.0): Triangle check
    return (vertices[0] + vertices[1] + vertices[2]) / 3.0;
}

// Todo (?): float avl_trianglecentroid(<geometry>; int point1; int point2; int point3)

#endif  // _AVL_TRIANGLECENTROID_H_
