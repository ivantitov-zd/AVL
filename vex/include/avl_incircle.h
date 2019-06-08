#pragma once
#ifndef _AVL_INCIRCLE_H_
#define _AVL_INCIRCLE_H_

int
avl_incircle(const vector2 position; const float radius)
{
    return length2(position) <= radius * radius;
}

int
avl_incircle(const vector2 position;
             const vector2 center;
             const float radius)
{
    return distance2(position, center) <= radius * radius;
}

#endif  // _AVL_INCIRCLE_H_
