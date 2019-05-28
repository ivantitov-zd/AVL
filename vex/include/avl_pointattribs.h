#pragma once
#ifndef _avl_pointattribs_
#define _avl_pointattribs_

string[]
avl_pointattribs(const int geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

string[]
avl_pointattribs(const string geometry)
{
    return detailintrinsic(geometry, 'pointattributes');
}

#endif
