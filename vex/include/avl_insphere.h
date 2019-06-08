#pragma once
#ifndef _AVL_INSPHERE_H_
#define _AVL_INSPHERE_H_

int
avl_insphere(const vector position; const float radius)
{
    return length2(position) <= radius * radius;
}

int
avl_insphere(const vector position;
             const vector center;
             const float radius)
{
    return distance2(position, center) <= radius * radius;
}

#endif  // _AVL_INSPHERE_H_
