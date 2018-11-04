#ifndef _aedgegroups_
#define _aedgegroups_

string[]
aedgegroups(const int geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

string[]
aedgegroups(const string geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

#endif
