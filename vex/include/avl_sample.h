#pragma once
#ifndef _AVL_SAMPLE_H_
#define _AVL_SAMPLE_H_

#include "avl_randrange.h"
#include "avl_in.h"

float
avl_sample(const float sequence[];
           const int size;
           const float seed)
{
    sequenceLength = len(sequence);
    if (size > sequenceLength)
    {
        error('Sample AVL: Size cannot be larger than sequence length');
        return;
    }
    float sampleSequence[];
    reize(sampleSequence, sequenceLength);
    int selected[];
    reize(selected, sequenceLength);
    int index;
    for (int i = 0; i < size; ++i)
    {
        for (float j = 0.1234567; 1; j += 0.01245)
        {
            index = avl_randrange(0, sequenceLength, i * j * seed);
            if (avl_in(selected, selected[i], 0, i))
            {
                selected[i] = index;
                sampleSequence[i] = sequence[index];
                break;
            }
        }
    }
    return sampleSequence;
}

// Todo (1.0): int avl_sample(const int[]; ...)

// Todo (1.0): int avl_sample(const string[]; ...)

// Todo (1.0): int avl_sample(const vector2[]; ...)

// Todo (1.0): int avl_sample(const vector[]; ...)

// Todo (1.0): int avl_sample(const vector4[]; ...)

// Todo (1.0): int avl_sample(const matrix2[]; ...)

// Todo (1.0): int avl_sample(const matrix3[]; ...)

// Todo (1.0): int avl_sample(const matrix[]; ...)

#endif  // _AVL_SAMPLE_H_
