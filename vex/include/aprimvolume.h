#ifndef _aprimvolume_
#define _aprimvolume_

float
aprimvolume(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredvolume', primnum);
}

float
aprimvolume(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredvolume', primnum);
}

#endif
