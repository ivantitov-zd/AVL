#pragma once
#ifndef _AVL_SHIFT_H_
#define _AVL_SHIFT_H_

float[]
avl_shift(const float sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    float newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

int[]
avl_shift(const int sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    int newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

string[]
avl_shift(const string sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    string newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

vector2[]
avl_shift(const vector2 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector2 newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

vector[]
avl_shift(const vector sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

vector4[]
avl_shift(const vector4 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector4 newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

matrix2[]
avl_shift(const matrix2 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix2 newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

matrix3[]
avl_shift(const matrix3 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix3 newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

matrix[]
avl_shift(const matrix sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix newSequence[];
    resize(newSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        newSequence[(i + shift) % sequenceLength] = sequence[i];
    return newSequence;
}

#endif  // _AVL_SHIFT_H_
