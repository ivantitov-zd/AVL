#pragma once
#ifndef _AVL_ISALMOSTEQUAL_H_
#define _AVL_ISALMOSTEQUAL_H_

// Todo (1.0): int avl_isalmostequal(const float; const float)

int
avl_isalmostequal(const float value1;
                  const float value2;
                  const float tolerance)
{
    return abs(value1 - value2) < tolerance;
}

int
avl_isalmostequal(const int value1;
                  const int value2;
                  const int tolerance)
{
    return abs(value1 - value2) < tolerance;
}

// Todo (1.1): int avl_isalmostequal(const string; const string; const int)

// Todo (1.0): int avl_isalmostequal(const vector2; const vector2)

int
avl_isalmostequal(const vector2 value1;
                  const vector2 value2;
                  const float tolerance)
{
    return distance2(value1, value2) < tolerance * tolerance;
}

// Todo (1.0): int avl_isalmostequal(const vector; const vector)

int
avl_isalmostequal(const vector value1;
                  const vector value2;
                  const float tolerance)
{
    return distance2(value1, value2) < tolerance * tolerance;
}

// Todo (1.0): int avl_isalmostequal(const vector4; const vector4)

int
avl_isalmostequal(const vector4 value1;
                  const vector4 value2;
                  const float tolerance)
{
    return qdistance(value1, value2) < tolerance;
}

// Todo (1.2): int avl_isalmostequal(const matrix2; const matrix2; const vector2; const float)

// Todo (1.2): int avl_isalmostequal(const matrix3; const matrix3; const vector; const float)

// Todo (1.2): int avl_isalmostequal(const matrix; const matrix; const vector; const float)

#endif  // _AVL_ISALMOSTEQUAL_H_
