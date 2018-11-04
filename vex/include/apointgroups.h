#ifndef _apointgroups_
#define _apointgroups_

string[]
apointgroups(const int geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

string[]
apointgroups(const string geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

#endif
