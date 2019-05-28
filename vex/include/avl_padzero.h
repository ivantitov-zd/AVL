#pragma once
#ifndef _avl_padzero_
#define _avl_padzero_

string
avl_padzero(const int value; const int size)
{
    return sprintf('%*0d', size, value);
}

#endif
