#ifndef _avertexattribs_
#define _avertexattribs_

string[]
avertexattribs(const int geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

string[]
avertexattribs(const string geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

#endif
