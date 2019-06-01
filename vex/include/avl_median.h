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

#endif  // _AVL_MEDIAN_H_
