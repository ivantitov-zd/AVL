#pragma once
#ifndef _avl_primgroups_
#define _avl_primgroups_

string[]
avl_primgroups(const int geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

string[]
avl_primgroups(const string geometry)
{
    return detailintrinsic(geometry, 'primitivegroups');
}

#endif
