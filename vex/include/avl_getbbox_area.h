#pragma once
#ifndef _AVL_GETBBOX_AREA_H_
#define _AVL_GETBBOX_AREA_H_

float
avl_getbbox_area(const int geometry)
{
    vector size = getbbox_size(geometry);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getbbox_area(const string geometry)
{
    vector size = getbbox_size(geometry);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getbbox_area(const int geometry; const string primgroup)
{
    vector size = getbbox_size(geometry, primgroup);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

float
avl_getbbox_area(const string geometry; const string primgroup)
{
    vector size = getbbox_size(geometry, primgroup);
    return (size.x * size.y + size.y * size.z + size.x * size.z) * 2.0;
}

#endif  // _AVL_GETBBOX_AREA_H_
