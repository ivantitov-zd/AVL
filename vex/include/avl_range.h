#pragma once
#ifndef _AVL_RANGE_H_
#define _AVL_RANGE_H_

float[]
avl_range(const float start;
          const float end;
          const float step)
{
    float newArray[];
    int index = 0;
    if (step > 0.0)
    {
        resize(newArray, int(ceil((end - start) / float(step))));
        for (float value = start; value < end; value += step)
            newArray[index++] = value;
    } else if (step < 0.0)
    {
        resize(newArray, int(ceil(abs((end - start) / float(step)))));
        for (float value = start; value > end; value += step)
            newArray[index++] = value;
    } else
    {
        error('Range AVL: Step argument must not be 0');
    }
    return newArray;
}

float[]
avl_range(const float start; const float end)
{
    if (end > start)
        return avl_range(start, end, 1.0);
    else
        return avl_range(start, end, -1.0);
}

float[]
avl_range(const float end)
{
    return avl_range(0.0, end, 1.0);
}

int[]
avl_range(const int start;
          const int end;
          const int step)
{
    int newArray[];
    int index = 0;
    if (step > 0)
    {
        resize(newArray, int(ceil((end - start) / float(step))));
        for (int value = start; value < end; value += step)
            newArray[index++] = value;
    } else if (step < 0)
    {
        resize(newArray, int(ceil(abs((end - start) / float(step)))));
        for (int value = start; value > end; value += step)
            newArray[index++] = value;
    } else
    {
        error('Range AVL: Step argument must not be 0');
    }
    return newArray;
}

int[]
avl_range(const int start; const int end)
{
    if (end > start)
        return avl_range(start, end, 1);
    else
        return avl_range(start, end, -1);
}

int[]
avl_range(const int end)
{
    return avl_range(0, end, 1);
}

#endif  // _AVL_RANGE_H_
