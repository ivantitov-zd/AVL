#pragma once
#ifndef _AVL_MININDEX_H_
#define _AVL_MININDEX_H_

// Todo (?): -1 for empty sequence

int
avl_minindex(const float sequence[])
{
    int minIndex = 0;
    float minValue = sequence[minIndex];
    float currentValue;
    for (int i = 1; i < len(sequence); ++i)
    {
        currentValue = sequence[i];
        if (currentValue < minValue)
        {
            minValue = currentValue;
            minIndex = i;
        }
    }
    return minIndex;
}

int
avl_minindex(const int sequence[])
{
    int minIndex = 0;
    int minValue = sequence[minIndex];
    int currentValue;
    for (int i = 1; i < len(sequence); ++i)
    {
        currentValue = sequence[i];
        if (currentValue < minValue)
        {
            minValue = currentValue;
            minIndex = i;
        }
    }
    return minIndex;
}

#endif  // _AVL_MININDEX_H_
