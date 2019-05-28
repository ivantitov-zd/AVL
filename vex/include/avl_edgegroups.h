#pragma once
#ifndef _avl_edgegroups_
#define _avl_edgegroups_

string[]
avl_edgegroups(const int geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

string[]
avl_edgegroups(const string geometry)
{
    return detailintrinsic(geometry, 'edgegroups');
}

#endif
