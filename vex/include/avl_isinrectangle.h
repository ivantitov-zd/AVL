#pragma once
#ifndef _AVL_ISINRECTANGLE_H_
#define _AVL_ISINRECTANGLE_H_

int
avl_isinrectangle(const vector2 min;
                  const vector2 max;
                  const vector2 position)
{
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y;
}

int
avl_isinrectangle(const float left;
                  const float right;
                  const float top;
                  const float bottom;
                  const vector2 position)
{
    return position.x > left && position.x < right &&
           position.y > bottom && position.y < top;
}

#endif  // _AVL_ISINRECTANGLE_H_
