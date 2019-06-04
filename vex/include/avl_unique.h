#pragma once
#ifndef _AVL_UNIQUE_H_
#define _AVL_UNIQUE_H_

float[]
avl_unique(const float sequence[])
{
    float newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

int[]
avl_unique(const int sequence[])
{
    int newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

string[]
avl_unique(const string sequence[])
{
    string newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

vector2[]
avl_unique(const vector2 sequence[])
{
    vector2 newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

vector[]
avl_unique(const vector sequence[])
{
    vector newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

vector4[]
avl_unique(const vector4 sequence[])
{
    vector4 newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

matrix2[]
avl_unique(const matrix2 sequence[])
{
    matrix2 newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

matrix3[]
avl_unique(const matrix3 sequence[])
{
    matrix3 newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

matrix[]
avl_unique(const matrix sequence[])
{
    matrix newSequence[];
    append(newSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(newSequence, sequence[i]);
    return newSequence;
}

#endif  // _AVL_UNIQUE_H_
