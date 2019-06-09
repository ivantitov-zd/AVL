#pragma once
#ifndef _AVL_MAXINDEX_H_
#define _AVL_MAXINDEX_H_

// Todo (?): -1 for empty sequence

int
avl_maxindex(const float sequence[])
{
    int maxIndex = 0;
    float maxValue = sequence[maxIndex];
    float currentValue;
    for (int i = 1; i < len(sequence); ++i)
    {
        currentValue = sequence[i];
        if (currentValue > maxValue)
        {
            maxValue = currentValue;
            maxIndex = i;
        }
    }
    return maxIndex;
}

int
avl_maxindex(const int sequence[])
{
    int maxIndex = 0;
    int maxValue = sequence[maxIndex];
    int currentValue;
    for (int i = 1; i < len(sequence); ++i)
    {
        currentValue = sequence[i];
        if (currentValue > maxValue)
        {
            maxValue = currentValue;
            maxIndex = i;
        }
    }
    return maxIndex;
}

#endif  // _AVL_MAXINDEX_H_
