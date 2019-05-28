#pragma once
#ifndef _avl_unique_
#define _avl_unique_

float[]
avl_unique(const float array[])
{
    float newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

int[]
avl_unique(const int array[])
{
    int newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

string[]
avl_unique(const string array[])
{
    string newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

vector2[]
avl_unique(const vector2 array[])
{
    vector2 newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

vector[]
avl_unique(const vector array[])
{
    vector newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

vector4[]
avl_unique(const vector4 array[])
{
    vector4 newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

matrix2[]
avl_unique(const matrix2 array[])
{
    matrix2 newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

matrix3[]
avl_unique(const matrix3 array[])
{
    matrix3 newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

matrix[]
avl_unique(const matrix array[])
{
    matrix newArray[];
    append(newArray, array[0]);
    for (int i = 1; i < len(array); ++i)
        if (array[i] != array[i-1])
            append(newArray, array[i]);
    return newArray;
}

#endif
