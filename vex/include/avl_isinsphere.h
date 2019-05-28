#pragma once
#ifndef _avl_isinsphere_
#define _avl_isinsphere_

int
avl_isinsphere(const vector2 position;
               const vector2 center;
               const float radius)
{
    return distance2(position, center) <= radius * radius;
}

int
avl_isinsphere(const vector position;
               const vector center;
               const float radius)
{
    return distance2(position, center) <= radius * radius;
}

#endif
