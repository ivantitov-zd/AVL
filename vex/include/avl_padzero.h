#pragma once
#ifndef _AVL_PADZERO_H_
#define _AVL_PADZERO_H_

string
avl_padzero(const int value; const int size)
{
    return sprintf('%*0d', size, value);
}

#endif  // _AVL_PADZERO_H_
