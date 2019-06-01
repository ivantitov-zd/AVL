#pragma once
#ifndef _AVL_ISINSPHERE_H_
#define _AVL_ISINSPHERE_H_

int
avl_isinsphere(const vector position;
               const vector center;
               const float radius)
{
    return distance2(position, center) <= radius * radius;
}

#endif  // _AVL_ISINSPHERE_H_
