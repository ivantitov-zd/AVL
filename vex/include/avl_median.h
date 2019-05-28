#pragma once
#ifndef _avl_median_
#define _avl_median_

float
avl_median(const float array[])
{
    float sorted[] = sort(array);
    int arrayLength = len(sorted);
    if ((arrayLength & 1) == 0)  // Even
        return (sorted[(arrayLength - 1) / 2] + sorted[arrayLength / 2]) / 2.0;
    else
        return sorted[arrayLength / 2];
}

float
avl_median(const int array[])
{
    int sorted[] = sort(array);
    int arrayLength = len(sorted);
    if ((arrayLength & 1) == 0)  // Even
        return (sorted[(arrayLength - 1) / 2] + sorted[arrayLength / 2]) / 2.0;
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

#endif
