#pragma once
#ifndef _avl_pointgroups_
#define _avl_pointgroups_


string[]
avl_pointgroups(const int geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

string[]
avl_pointgroups(const string geometry)
{
    return detailintrinsic(geometry, 'pointgroups');
}

#endif
