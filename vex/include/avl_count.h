#pragma once
#ifndef _avl_count_
#define _avl_count_

int
avl_count(const string haystack; const string needle)
{
    int count = 0;
    int offset = len(needle);
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + offset);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const float haystack[]; const float needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const int haystack[]; const int needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const string haystack[]; const string needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const vector2 haystack[]; const vector2 needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const vector haystack[]; const vector needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const vector4 haystack[]; const vector4 needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const matrix2 haystack[]; const matrix2 needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const matrix3 haystack[]; const matrix3 needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

int
avl_count(const matrix haystack[]; const matrix needle)
{
    int count = 0;
    int index = 0;
    while (1)
    {
        index = find(haystack, needle, index + 1);
        if (index > -1)
            ++count;
        else
            break;
    }
    return count;
}

#endif
