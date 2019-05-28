#pragma once
#ifndef _avl_shift_
#define _avl_shift_

float[]
avl_shift(const float array[]; const int shift)
{
    int arrayLength = len(array);
    float newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

int[]
avl_shift(const int array[]; const int shift)
{
    int arrayLength = len(array);
    int newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

string[]
avl_shift(const string array[]; const int shift)
{
    int arrayLength = len(array);
    string newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

vector2[]
avl_shift(const vector2 array[]; const int shift)
{
    int arrayLength = len(array);
    vector2 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

vector[]
avl_shift(const vector array[]; const int shift)
{
    int arrayLength = len(array);
    vector newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

vector4[]
avl_shift(const vector4 array[]; const int shift)
{
    int arrayLength = len(array);
    vector4 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

matrix2[]
avl_shift(const matrix2 array[]; const int shift)
{
    int arrayLength = len(array);
    matrix2 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

matrix3[]
avl_shift(const matrix3 array[]; const int shift)
{
    int arrayLength = len(array);
    matrix3 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

matrix[]
avl_shift(const matrix array[]; const int shift)
{
    int arrayLength = len(array);
    matrix newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
        newArray[(i + shift) % arrayLength] = array[i];
    return newArray;
}

#endif
