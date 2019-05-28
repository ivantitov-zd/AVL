#pragma once
#ifndef _avl_trianglecentroid_
#define _avl_trianglecentroid_

vector2
avl_trianglecentroid(const vector2 vertex1;
                     const vector2 vertex2;
                     const vector2 vertex3)
{
    return (vertex1 + vertex2 + vertex3) / 3.0;
}

vector
avl_trianglecentroid(const vector vertex1;
                     const vector vertex2;
                     const vector vertex3)
{
    return (vertex1 + vertex2 + vertex3) / 3.0;
}

#endif
