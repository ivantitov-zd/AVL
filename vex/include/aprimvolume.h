#ifndef _aprimvolume_
#define _aprimvolume_

float
aprimvolume(const int input; const int primnum)
{
    return primintrinsic(input, 'measuredvolume', primnum);
}

float
aprimvolume(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'measuredvolume', primnum);
}

#endif
