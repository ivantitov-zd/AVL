#ifndef _avertexgroups_
#define _avertexgroups_

string[]
avertexgroups(const int geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

string[]
avertexgroups(const string geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

#endif
