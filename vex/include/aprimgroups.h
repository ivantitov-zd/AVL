#ifndef _aprimgroups_
#define _aprimgroups_

string[]
aprimgroups(const int geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

string[]
aprimgroups(const string geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

#endif
