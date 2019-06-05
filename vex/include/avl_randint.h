#pragma once
#ifndef _AVL_RANDINT_H_
#define _AVL_RANDINT_H_

#include "avl_randrange.h"

int
avl_randint(const float seed;
            const int min;
            const int max)
{
    return avl_randrange(seed, min, max + 1);
}

int
avl_randint(const float seed;
            const float seed2;
            const int min;
            const int max)
{
    return avl_randrange(seed, seed2, min, max + 1);
}

int
avl_randint(const vector2 seed;
            const int min;
            const int max)
{
    return avl_randrange(seed, min, max + 1);
}

int
avl_randint(const vector seed;
            const int min;
            const int max)
{
    return avl_randrange(seed, min, max + 1);
}

int
avl_randint(const vector4 seed;
            const int min;
            const int max)
{
    return avl_randrange(seed, min, max + 1);
}

#endif  // _AVL_RANDINT_H_
