#pragma once
#ifndef _AVL_UNIQUE_H_
#define _AVL_UNIQUE_H_

float[]
avl_unique(const float sequence[])
{
    float uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

int[]
avl_unique(const int sequence[])
{
    int uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

string[]
avl_unique(const string sequence[])
{
    string uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

vector2[]
avl_unique(const vector2 sequence[])
{
    vector2 uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

vector[]
avl_unique(const vector sequence[])
{
    vector uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

vector4[]
avl_unique(const vector4 sequence[])
{
    vector4 uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

matrix2[]
avl_unique(const matrix2 sequence[])
{
    matrix2 uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

matrix3[]
avl_unique(const matrix3 sequence[])
{
    matrix3 uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

matrix[]
avl_unique(const matrix sequence[])
{
    matrix uniqueSequence[];
    append(uniqueSequence, sequence[0]);
    for (int i = 1; i < len(sequence); ++i)
        if (sequence[i] != sequence[i-1])
            append(uniqueSequence, sequence[i]);
    return uniqueSequence;
}

#endif  // _AVL_UNIQUE_H_
