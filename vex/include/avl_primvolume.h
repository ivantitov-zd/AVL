#pragma once
#ifndef _AVL_PRIMVOLUME_H_
#define _AVL_PRIMVOLUME_H_

float
avl_primvolume(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredvolume', primnum);
}

float
avl_primvolume(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredvolume', primnum);
}

#endif  // _AVL_PRIMVOLUME_H_
