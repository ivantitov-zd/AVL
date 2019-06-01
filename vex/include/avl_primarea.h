#pragma once
#ifndef _AVL_PRIMAREA_H_
#define _AVL_PRIMAREA_H_

float
avl_primarea(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredarea', primnum);
}

float
avl_primarea(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredarea', primnum);
}

#endif  // _AVL_PRIMAREA_H_
