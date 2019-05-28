#pragma once
#ifndef _avl_round_
#define _avl_round_

float
avl_round(const float value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

int
avl_round(const int value; const int ndigits)
{
    float shift = (int)pow(10, abs(ndigits));
    return int(rint(value / shift) * shift);
}

vector2
avl_round(const vector2 value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

vector
avl_round(const vector value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

vector4
avl_round(const vector4 value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

float[]
avl_round(const float values[]; const int ndigits)
{
    float newValues[];
    resize(newValues, len(values));
    foreach(int index; float value; values)
        newValues[index] = avl_round(value, ndigits);
    return newValues;
}

int[]
avl_round(const int values[]; const int ndigits)
{
    int newValues[];
    resize(newValues, len(values));
    foreach(int index; int value; values)
        newValues[index] = avl_round(value, ndigits);
    return newValues;
}

vector2[]
avl_round(const vector2 values[]; const int ndigits)
{
    vector2 newValues[];
    resize(newValues, len(values));
    foreach(int index; vector2 value; values)
        newValues[index] = avl_round(value, ndigits);
    return newValues;
}

vector[]
avl_round(const vector values[]; const int ndigits)
{
    vector newValues[];
    resize(newValues, len(values));
    foreach(int index; vector value; values)
        newValues[index] = avl_round(value, ndigits);
    return newValues;
}

vector4[]
avl_round(const vector4 values[]; const int ndigits)
{
    vector4 newValues[];
    resize(newValues, len(values));
    foreach(int index; vector4 value; values)
        newValues[index] = avl_round(value, ndigits);
    return newValues;
}

#endif
