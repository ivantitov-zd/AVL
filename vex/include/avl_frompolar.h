#pragma once
#ifndef _AVL_FROMPOLAR_H_
#define _AVL_FROMPOLAR_H_

vector2
avl_frompolar(const float theta; const float radius)
{
    float x = cos(theta);
    float y = sin(theta);
    return set(x, y) * radius;
}

vector2
avl_frompolar(const vector2 position)
{
    return avl_frompolar(position.u, position.v);
}

#endif  // _AVL_FROMPOLAR_H_
