#pragma once
#ifndef _AVL_ALMOSTEQUAL_H_
#define _AVL_ALMOSTEQUAL_H_

#include <math.h>

int
avl_almostequal(const float value1; const float value2)
{
    return abs(value1 - value2) <= M_TOLERANCE;
}

int
avl_almostequal(const float value1;
                const float value2;
                const float tolerance)
{
    return abs(value1 - value2) <= tolerance;
}

int
avl_almostequal(const int value1;
                const int value2;
                const int tolerance)
{
    return abs(value1 - value2) <= tolerance;
}

// Todo (1.1): int avl_almostequal(const string; const string; const int)

// Todo (1.1): int avl_almostequal(const string; const string; const string|int; const int)

int
avl_almostequal(const vector2 value1; const vector2 value2)
{
    return distance2(value1, value2) <= M_TOLERANCE * M_TOLERANCE;
}

int
avl_almostequal(const vector2 value1;
                const vector2 value2;
                const float tolerance)
{
    return distance2(value1, value2) <= tolerance * tolerance;
}

int
avl_almostequal(const vector value1; const vector value2)
{
    return distance2(value1, value2) <= M_TOLERANCE * M_TOLERANCE;
}

int
avl_almostequal(const vector value1;
                const vector value2;
                const float tolerance)
{
    return distance2(value1, value2) <= tolerance * tolerance;
}

int
avl_almostequal(const vector4 value1; const vector4 value2)
{
    return qdistance(value1, value2) <= M_TOLERANCE;
}

int
avl_almostequal(const vector4 value1;
                const vector4 value2;
                const float tolerance)
{
    return qdistance(value1, value2) <= tolerance;
}

// Todo (1.2): int avl_almostequal(const matrix2; const matrix2; const vector2; const float)

// Todo (1.2): int avl_almostequal(const matrix3; const matrix3; const vector; const float)

// Todo (1.2): int avl_almostequal(const matrix; const matrix; const vector; const float)

#endif  // _AVL_ALMOSTEQUAL_H_
