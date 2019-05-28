#pragma once
#ifndef _avl_detailattribs_
#define _avl_detailattribs_

string[]
avl_detailattribs(const int geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

string[]
avl_detailattribs(const string geometry)
{
    return detailintrinsic(geometry, 'detailattributes');
}

#endif
