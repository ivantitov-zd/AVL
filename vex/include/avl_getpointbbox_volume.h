#pragma once
#ifndef _AVL_GETPOINTBBOX_VOLUME_H_
#define _AVL_GETPOINTBBOX_VOLUME_H_

float
avl_getpointbbox_volume(const int geometry)
{
    return product(vector(getpointbbox_size(geometry)));
}

float
avl_getpointbbox_volume(const string geometry)
{
    return product(vector(getpointbbox_size(geometry)));
}

float
avl_getpointbbox_volume(const int geometry; const string pointgroup)
{
    return product(vector(getpointbbox_size(geometry, pointgroup)));
}

float
avl_getpointbbox_volume(const string geometry; const string pointgroup)
{
    return product(vector(getpointbbox_size(geometry, pointgroup)));
}

#endif  // _AVL_GETPOINTBBOX_VOLUME_H_
