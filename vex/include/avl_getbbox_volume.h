#pragma once
#ifndef _avl_getbbox_volume_
#define _avl_getbbox_volume_

float
avl_getbbox_volume(const int geometry)
{
    return product(vector(getbbox_size(geometry)));
}

float
avl_getbbox_volume(const string geometry)
{
    return product(vector(getbbox_size(geometry)));
}

float
avl_getbbox_volume(const int geometry; const string primgroup)
{
    return product(vector(getbbox_size(geometry, primgroup)));
}

float
avl_getbbox_volume(const string geometry; const string primgroup)
{
    return product(vector(getbbox_size(geometry, primgroup)));
}

#endif
