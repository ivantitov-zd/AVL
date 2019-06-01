#pragma once
#ifndef _AVL_TRIANGLENORMAL_H_
#define _AVL_TRIANGLENORMAL_H_

vector
avl_trianglenormal(const vector vertex1;
                   const vector vertex2;
                   const vector vertex3)
{
    vector edge1 = vertex1 - vertex2;
    vector edge2 = vertex3 - vertex2;
    return normalize(cross(edge1, edge2));
}

#endif  // _AVL_TRIANGLENORMAL_H_
