#pragma once
#ifndef _avl_primattribs_
#define _avl_primattribs_

string[]
avl_primattribs(const int geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

string[]
avl_primattribs(const string geometry)
{
    return detailintrinsic(geometry, 'primitiveattributes');
}

#endif
