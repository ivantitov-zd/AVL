#pragma once
#ifndef _avl_primarea_
#define _avl_primarea_

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

#endif
