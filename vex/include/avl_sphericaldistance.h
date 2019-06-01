#pragma once
#ifndef _AVL_SPHERICALDISTANCE_H_
#define _AVL_SPHERICALDISTANCE_H_

// #include "avl_angle.h"

float
avl_sphericaldistance(const vector position1; const vector position2)
{
    return acos(dot(position1, position2)) * float(length(position1));
}

#endif  // _AVL_SPHERICALDISTANCE_H_
