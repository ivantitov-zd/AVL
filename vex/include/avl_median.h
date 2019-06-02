#pragma once
#ifndef _AVL_MEDIAN_H_
#define _AVL_MEDIAN_H_

#include "avl_iseven.h"

float
avl_median(const float array[])
{
    float sorted[] = sort(array);
    int arrayLength = len(sorted);
    if (avl_iseven(arrayLength))
        return (sorted[(arrayLength - 1) / 2] + sorted[arrayLength / 2]) * 0.5;
    else
        return sorted[arrayLength / 2];
}

float
avl_median(const int array[])
{
    int sorted[] = sort(array);
    int arrayLength = len(sorted);
    if (avl_iseven(arrayLength))
        return (sorted[(arrayLength - 1) / 2] + sorted[arrayLength / 2]) * 0.5;
    else
        return sorted[arrayLength / 2];
}

// Todo (2.0): float avl_median(const float; const float; const float ...)

// Todo (2.0): float avl_median(const int; const int; const int ...)

float
avl_medianlow(const float array[])
{
    float sorted[] = sort(array);
    return sorted[(len(sorted) - 1) / 2];
}

int
avl_medianlow(const int array[])
{
    int sorted[] = sort(array);
    return sorted[(len(sorted) - 1) / 2];
}

// Todo (2.0): float avl_medianlow(const float; const float; const float ...)

// Todo (2.0): int avl_medianlow(const int; const int; const int ...)

float
avl_medianhigh(const float array[])
{
    float sorted[] = sort(array);
    return sorted[len(sorted) / 2];
}

int
avl_medianhigh(const int array[])
{
    int sorted[] = sort(array);
    return sorted[len(sorted) / 2];
}

// Todo (2.0): float avl_medianhigh(const float; const float; const float ...)

// Todo (2.0): int avl_medianhigh(const int; const int; const int ...)

#endif  // _AVL_MEDIAN_H_
