#pragma once
#ifndef _AVL_RANDRANGE_H_
#define _AVL_RANDRANGE_H_

float
avl_randrange(const float seed;
              const float min;
              const float max)
{
    return fit01(rand(seed), min, max);
}

float
avl_randrange(const float seed;
              const float seed2;
              const float min;
              const float max)
{
    return fit01(rand(seed, seed2), min, max);
}

float
avl_randrange(const vector2 seed;
              const float min;
              const float max)
{
    return fit01(rand(seed), min, max);
}

float
avl_randrange(const vector seed;
              const float min;
              const float max)
{
    return fit01(rand(seed), min, max);
}

float
avl_randrange(const vector4 seed;
              const float min;
              const float max)
{
    return fit01(rand(seed), min, max);
}

int
avl_randrange(const float seed;
              const int min;
              const int max)
{
    return (int)fit01(rand(seed), min, max);
}

int
avl_randrange(const float seed;
              const float seed2;
              const int min;
              const int max)
{
    return (int)fit01(rand(seed, seed2), min, max);
}

int
avl_randrange(const vector2 seed;
              const int min;
              const int max)
{
    return (int)fit01(rand(seed), min, max);
}

int
avl_randrange(const vector seed;
              const int min;
              const int max)
{
    return (int)fit01(rand(seed), min, max);
}

int
avl_randrange(const vector4 seed;
              const int min;
              const int max)
{
    return (int)fit01(rand(seed), min, max);
}

vector2
avl_randrange(const float seed;
              const vector2 min;
              const vector2 max)
{
    return fit01(vector2(rand(seed)), min, max);
}

vector2
avl_randrange(const float seed;
              const float seed2;
              const vector2 min;
              const vector2 max)
{
    return fit01(vector2(rand(seed, seed2)), min, max);
}

vector2
avl_randrange(const vector2 seed;
              const vector2 min;
              const vector2 max)
{
    return fit01(vector2(rand(seed)), min, max);
}

vector2
avl_randrange(const vector seed;
              const vector2 min;
              const vector2 max)
{
    return fit01(vector2(rand(seed)), min, max);
}

vector2
avl_randrange(const vector4 seed;
              const vector2 min;
              const vector2 max)
{
    return fit01(vector2(rand(seed)), min, max);
}

vector
avl_randrange(const float seed;
              const vector min;
              const vector max)
{
    return fit01(vector(rand(seed)), min, max);
}

vector
avl_randrange(const float seed;
              const float seed2;
              const vector min;
              const vector max)
{
    return fit01(vector(rand(seed)), min, max);
}

vector
avl_randrange(const vector2 seed;
              const vector min;
              const vector max)
{
    return fit01(vector(rand(seed)), min, max);
}

vector
avl_randrange(const vector seed;
              const vector min;
              const vector max)
{
    return fit01(vector(rand(seed)), min, max);
}

vector
avl_randrange(const vector4 seed;
              const vector min;
              const vector max)
{
    return fit01(vector(rand(seed)), min, max);
}

vector4
avl_randrange(const float seed;
              const vector4 min;
              const vector4 max)
{
    return fit01(vector4(rand(seed)), min, max);
}

vector4
avl_randrange(const float seed;
              const float seed2;
              const vector4 min;
              const vector4 max)
{
    return fit01(vector4(rand(seed, seed2)), min, max);
}

vector4
avl_randrange(const vector2 seed;
              const vector4 min;
              const vector4 max)
{
    return fit01(vector4(rand(seed)), min, max);
}

vector4
avl_randrange(const vector seed;
              const vector4 min;
              const vector4 max)
{
    return fit01(vector4(rand(seed)), min, max);
}

vector4
avl_randrange(const vector4 seed;
              const vector4 min;
              const vector4 max)
{
    return fit01(vector4(rand(seed)), min, max);
}

#endif  // _AVL_RANDRANGE_H_
