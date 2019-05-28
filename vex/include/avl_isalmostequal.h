#pragma once
#ifndef _avl_isalmostequal_
#define _avl_isalmostequal_

int
avl_isalmostequal(const float value1;
                  const float value2;
                  const float delta)
{
    return abs(value1 - value2) < delta;
}

int
avl_isalmostequal(const int value1;
                  const int value2;
                  const int delta)
{
    return abs(value1 - value2) < delta;
}

// Todo: string overload

int
avl_isalmostequal(const vector2 value1;
                  const vector2 value2;
                  const float delta)
{
    return distance2(value1, value2) < delta * delta;
}

int
avl_isalmostequal(const vector value1;
                  const vector value2;
                  const float delta)
{
    return distance2(value1, value2) < delta * delta;
}

int
avl_isalmostequal(const vector4 value1;
                  const vector4 value2;
                  const float delta)
{
    return qdistance(value1, value2) < delta;
}

// Todo: matrix overloads

#endif
