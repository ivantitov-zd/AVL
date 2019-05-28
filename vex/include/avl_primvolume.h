#pragma once
#ifndef _avl_primvolume_
#define _avl_primvolume_

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

#endif
