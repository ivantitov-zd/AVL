#pragma once
#ifndef _AVL_PRIMNORMAL_H_
#define _AVL_PRIMNORMAL_H_

vector
avl_primnormal(int geometry; int primnum)
{
    return prim_normal(geometry, primnum, 0.5, 0.5);
}

vector
avl_primnormal(string geometry; int primnum)
{
    return prim_normal(geometry, primnum, 0.5, 0.5);
}

#endif  // _AVL_PRIMNORMAL_H_
