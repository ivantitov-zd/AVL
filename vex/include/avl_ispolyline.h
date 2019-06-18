#pragma once
#ifndef _AVL_ISPOLYLINE_H_
#define _AVL_ISPOLYLINE_H_

#include "avl_primtype.h"
#include "avl_isclosed.h"

int
avl_ispolyline(const int geometry; const int primnum)
{
    return avl_primtype(geometry, primnum) == AVL_PRIMTYPE_POLY &&
           !avl_isclosed(geometry, primnum);
}

#endif  // _AVL_ISPOLYLINE_H_
