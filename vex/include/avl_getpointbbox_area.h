#pragma once
#ifndef _AVL_GETPOINTBBOX_AREA_H_
#define _AVL_GETPOINTBBOX_AREA_H_

float
avl_getpointbbox_area(const int geometry)
{
    vector size = getpointbbox_size(geometry);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getpointbbox_area(const string geometry)
{
    vector size = getpointbbox_size(geometry);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getpointbbox_area(const int geometry; const string pointgroup)
{
    vector size = getpointbbox_size(geometry, pointgroup);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getpointbbox_area(const string geometry; const string pointgroup)
{
    vector size = getpointbbox_size(geometry, pointgroup);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

#endif  // _AVL_GETPOINTBBOX_AREA_H_
