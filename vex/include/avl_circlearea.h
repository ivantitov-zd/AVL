#pragma once
#ifndef _AVL_CIRCLEAREA_H_
#define _AVL_CIRCLEAREA_H_

#include <math.h>

float
avl_circlearea(const float radius)
{
    return M_PI * radius * radius;
}

#endif  // _AVL_CIRCLEAREA_H_
