#pragma once
#ifndef _AVL_TOPOLAR_H_
#define _AVL_TOPOLAR_H_

vector2
avl_topolar(const float x; const float y;)
{
    float theta = atan(y, x);
    float radius = length(set(x, y));
    return set(theta, radius);
}

vector2
avl_topolar(const vector2 position)
{
    float theta = atan(position.y, position.x);
    float radius = length(position);
    return set(theta, radius);
}

#endif  // _AVL_TOPOLAR_H_
