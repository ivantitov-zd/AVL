#ifndef _apointattribs_
#define _apointattribs_

string[]
apointattribs(const int geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

string[]
apointattribs(const string geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

#endif
