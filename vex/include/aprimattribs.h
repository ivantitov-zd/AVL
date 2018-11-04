#ifndef _aprimattribs_
#define _aprimattribs_

string[]
aprimattribs(const int geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

string[]
aprimattribs(const string geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

#endif
