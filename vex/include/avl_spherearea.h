#pragma once
#ifndef _AVL_SPHEREAREA_H_
#define _AVL_SPHEREAREA_H_

float
avl_spherearea(const float radius)
{
    return 12.566370614359172 * radius * radius;
}

#endif  // _AVL_SPHEREAREA_H_
