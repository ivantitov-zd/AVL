#pragma once
#ifndef _AVL_MEDIAN_H_
#define _AVL_MEDIAN_H_

#include "avl_iseven.h"

float
avl_median(const float sequence[])
{
    float sorted[] = sort(sequence);
    int sequenceLength = len(sorted);
    if (avl_iseven(sequenceLength))
        return (sorted[(sequenceLength - 1) / 2] + sorted[sequenceLength / 2]) * 0.5;
    else
        return sorted[sequenceLength / 2];
}

float
avl_median(const int sequence[])
{
    int sorted[] = sort(sequence);
    int sequenceLength = len(sorted);
    if (avl_iseven(sequenceLength))
        return (sorted[(sequenceLength - 1) / 2] + sorted[sequenceLength / 2]) * 0.5;
    else
        return sorted[sequenceLength / 2];
}

// Todo (1.0): vector2 avl_median(const vector2[])

// Todo (1.0): vector avl_median(const vector[])

// Todo (2.0): float avl_median(const float; const float; const float ...)

// Todo (2.0): float avl_median(const int; const int; const int ...)

#endif  // _AVL_MEDIAN_H_
