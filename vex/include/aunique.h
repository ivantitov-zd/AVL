#ifndef _aunique_
#define _aunique_

float[]
aunique(const float srcArray[])
{
    float newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

int[]
aunique(const int srcArray[])
{
    int newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

string[]
aunique(const string srcArray[])
{
    string newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

vector2[]
aunique(const vector2 srcArray[])
{
    vector2 newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

vector[]
aunique(const vector srcArray[])
{
    vector newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

vector4[]
aunique(const vector4 srcArray[])
{
    vector4 newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

matrix2[]
aunique(const matrix2 srcArray[])
{
    matrix2 newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

matrix3[]
aunique(const matrix3 srcArray[])
{
    matrix3 newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

matrix[]
aunique(const matrix srcArray[])
{
    matrix newArray[];
    append(newArray, srcArray[0]);
    for (int i = 1; i < len(srcArray); ++i)
    {
        if (srcArray[i] != srcArray[i-1])
            append(newArray, srcArray[i]);
    }
    return newArray;
}

#endif
