#pragma once
#ifndef _AVL_POINTNORMAL_H_
#define _AVL_POINTNORMAL_H_

#include "avl_primnormal.h"

vector
avl_pointnormal(int geometry; int ptnum)
{
    vector normal = {0, 0, 0};
    int primitives[] = pointprims(geometry, ptnum);
    for (int primitive : primitives)
        normal += avl_primnormal(geometry, primitive);
    return normalize(normal / len(primitives));
}

#endif  // _AVL_POINTNORMAL_H_
