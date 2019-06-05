#pragma once
#ifndef _AVL_SHUFFLE_H_
#define _AVL_SHUFFLE_H_

#include "avl_randint.h"
#include "avl_swap.h"

float[]
avl_shuffle(const float sequence[]; const float seed)
{
    float shuffledSequence[] = sequence;
    int j;
    for (int i = len(sequence)-1; i != 0; --i)
    {
        j = int(avl_randint(i * seed, 0, i));
        avl_swap(shuffledSequence[i], shuffledSequence[j]);
    }
    return shuffledSequence;
}
/*
int[]
avl_shuffle(const int sequence[]; const float seed)
{
    //
}

string[]
avl_shuffle(const string sequence[]; const float seed)
{
    //
}

vector2[]
avl_shuffle(const vector2 sequence[]; const float seed)
{
    //
}

vector[]
avl_shuffle(const vector sequence[]; const float seed)
{
    //
}

vector4[]
avl_shuffle(const vector4 sequence[]; const float seed)
{
    //
}

matrix2[]
avl_shuffle(const matrix2 sequence[]; const float seed)
{
    //
}

matrix3[]
avl_shuffle(const matrix3 sequence[]; const float seed)
{
    //
}

matrix[]
avl_shuffle(const matrix sequence[]; const float seed)
{
    //
}
*/
#endif  // _AVL_SHUFFLE_H_
