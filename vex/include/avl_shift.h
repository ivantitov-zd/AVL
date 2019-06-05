#pragma once
#ifndef _AVL_SHIFT_H_
#define _AVL_SHIFT_H_

float[]
avl_shift(const float sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    float shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

int[]
avl_shift(const int sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    int shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

string[]
avl_shift(const string sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    string shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

vector2[]
avl_shift(const vector2 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector2 shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

vector[]
avl_shift(const vector sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

vector4[]
avl_shift(const vector4 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    vector4 shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

matrix2[]
avl_shift(const matrix2 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix2 shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

matrix3[]
avl_shift(const matrix3 sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix3 shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

matrix[]
avl_shift(const matrix sequence[]; const int shift)
{
    int sequenceLength = len(sequence);
    matrix shiftedSequence[];
    resize(shiftedSequence, sequenceLength);
    for (int i = 0; i < sequenceLength; ++i)
        shiftedSequence[(i + shift) % sequenceLength] = sequence[i];
    return shiftedSequence;
}

#endif  // _AVL_SHIFT_H_
