#pragma once
#ifndef _AVL_SWAP_H_
#define _AVL_SWAP_H_

void
avl_swap(export float variable1; export float variable2)
{
    float temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export int variable1; export int variable2)
{
    int temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export string variable1; export string variable2)
{
    string temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export vector2 variable1; export vector2 variable2)
{
    vector2 temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export vector variable1; export vector variable2)
{
    vector temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export vector4 variable1; export vector4 variable2)
{
    vector4 temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export matrix2 variable1; export matrix2 variable2)
{
    matrix2 temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export matrix3 variable1; export matrix3 variable2)
{
    matrix3 temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void
avl_swap(export matrix variable1; export matrix variable2)
{
    matrix temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

#endif  // _AVL_SWAP_H_
