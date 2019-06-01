#pragma once
#ifndef _AVL_ISEVEN_H_
#define _AVL_ISEVEN_H_

int
avl_iseven(const int value)
{
    return (value & 1) == 0;
}

#endif  // _AVL_ISEVEN_H_
