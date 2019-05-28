#pragma once
#ifndef _avl_vertexattribs_
#define _avl_vertexattribs_

string[]
avl_vertexattribs(const int geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

string[]
avl_vertexattribs(const string geometry)
{
    return detailintrinsic(geometry, 'vertexattributes');
}

#endif
