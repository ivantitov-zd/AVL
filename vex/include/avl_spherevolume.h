#pragma once
#ifndef _AVL_SPHEREVOLUME_H_
#define _AVL_SPHEREVOLUME_H_

float
avl_spherevolume(const float radius)
{
    return 4.1887902047863909 * radius * radius * radius;
}

#endif  // _AVL_SPHEREVOLUME_H_
