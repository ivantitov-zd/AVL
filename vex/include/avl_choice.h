#pragma once
#ifndef _AVL_CHOICE_H_
#define _AVL_CHOICE_H_

#include "avl_randrange.h"

float
avl_choice(const float sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

int
avl_choice(const int sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

string
avl_choice(const string sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

vector2
avl_choice(const vector2 sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

vector
avl_choice(const vector sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

vector4
avl_choice(const vector4 sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

matrix2
avl_choice(const matrix2 sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

matrix3
avl_choice(const matrix3 sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

matrix
avl_choice(const matrix sequence[]; const float seed)
{
    sequenceLength = len(sequence);
    if (sequenceLength == 0)
        error('Choice AVL: Sequence cannot be empty');
    return sequence[avl_randrange(seed, 0, sequenceLength)];
}

#endif  // _AVL_CHOICE_H_
