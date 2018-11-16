#ifndef _aprimarea_
#define _aprimarea_

float
aprimarea(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredarea', primnum);
}

float
aprimarea(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredarea', primnum);
}

#endif
