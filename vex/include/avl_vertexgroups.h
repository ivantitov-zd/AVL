#pragma once
#ifndef _avl_vertexgroups_
#define _avl_vertexgroups_

string[]
avl_vertexgroups(const int geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

string[]
avl_vertexgroups(const string geometry)
{
    return detailintrinsic(geometry, 'vertexgroups');
}

#endif
