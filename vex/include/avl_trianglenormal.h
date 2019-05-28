#pragma once
#ifndef _avl_trianglenormal_
#define _avl_trianglenormal_

vector
avl_trianglenormal(const vector vertex1;
                   const vector vertex2;
                   const vector vertex3)
{
    vector edge1 = vertex1 - vertex2;
    vector edge2 = vertex3 - vertex2;
    return cross(edge1, edge2);
}

#endif
