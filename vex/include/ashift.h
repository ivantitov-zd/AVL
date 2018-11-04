#ifndef _ashift_
#define _ashift_

float[]
ashift(const float array_[]; const int offset)
{
    int arrayLength = len(array_);
    float newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

int[]
ashift(const int array_[]; const int offset)
{
    int arrayLength = len(array_);
    int newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

string[]
ashift(const string array_[]; const int offset)
{
    int arrayLength = len(array_);
    string newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

vector2[]
ashift(const vector2 array_[]; const int offset)
{
    int arrayLength = len(array_);
    vector2 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

vector[]
ashift(const vector array_[]; const int offset)
{
    int arrayLength = len(array_);
    vector newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

vector4[]
ashift(const vector4 array_[]; const int offset)
{
    int arrayLength = len(array_);
    vector4 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

matrix2[]
ashift(const matrix2 array_[]; const int offset)
{
    int arrayLength = len(array_);
    matrix2 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

matrix3[]
ashift(const matrix3 array_[]; const int offset)
{
    int arrayLength = len(array_);
    matrix3 newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

matrix[]
ashift(const matrix array_[]; const int offset)
{
    int arrayLength = len(array_);
    matrix newArray[];
    resize(newArray, arrayLength);
    for (int i = 0; i < arrayLength; ++i)
    {
        newArray[(i + offset) % arrayLength] = array_[i];
    }
    return newArray;
}

#endif
