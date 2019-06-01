#pragma once
#ifndef _AVL_SWAP_H_
#define _AVL_SWAP_H_

void
avl_swap(export float value1; export float value2)
{
    float temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export int value1; export int value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export string value1; export string value2)
{
    string temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export vector2 value1; export vector2 value2)
{
    vector2 temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export vector value1; export vector value2)
{
    vector temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export vector4 value1; export vector4 value2)
{
    vector4 temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export matrix2 value1; export matrix2 value2)
{
    matrix2 temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export matrix3 value1; export matrix3 value2)
{
    matrix3 temp = value1;
    value1 = value2;
    value2 = temp;
}

void
avl_swap(export matrix value1; export matrix value2)
{
    matrix temp = value1;
    value1 = value2;
    value2 = temp;
}

#endif  // _AVL_SWAP_H_
