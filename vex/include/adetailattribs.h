#ifndef _adetailattribs_
#define _adetailattribs_

string[]
adetailattribs(const int geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

string[]
adetailattribs(const string geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

#endif
