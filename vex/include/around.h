#ifndef _around_
#define _around_

float
around(const float value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

int
around(const int value; const int ndigits)
{
    float shift = (int)pow(10, abs(ndigits));
    return int(rint(value / shift) * shift);
}

vector2
around(const vector2 value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

vector
around(const vector value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

vector4
around(const vector4 value; const int ndigits)
{
    float shift = pow(10, ndigits);
    return rint(value * shift) / shift;
}

float[]
around(const float values[]; const int ndigits)
{
    float _array[];
    foreach(float value; values)
    {
        append(_array, around(value, ndigits));
    }
    return _array;
}

int[]
around(const int values[]; const int ndigits)
{
    int _array[];
    foreach(int value; values)
    {
        append(_array, around(value, ndigits));
    }
    return _array;
}

vector2[]
around(const vector2 values[]; const int ndigits)
{
    vector2 _array[];
    foreach(vector2 value; values)
    {
        append(_array, around(value, ndigits));
    }
    return _array;
}

vector[]
around(const vector values[]; const int ndigits)
{
    vector _array[];
    foreach(vector value; values)
    {
        append(_array, around(value, ndigits));
    }
    return _array;
}

vector4[]
around(const vector4 values[]; const int ndigits)
{
    vector4 _array[];
    foreach(vector4 value; values)
    {
        append(_array, around(value, ndigits));
    }
    return _array;
}

#endif
