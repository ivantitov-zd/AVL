#pragma once
#ifndef _avl_isinbbox_
#define _avl_isinbbox_

int
avl_isinbbox(const int geometry;
             const vector position)
{
    vector min = getbbox_min(geometry);
    vector max = getbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_isinbbox(const string geometry;
             const vector position)
{
    vector min = getbbox_min(geometry);
    vector max = getbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_isinbbox(const int geometry;
             const vector position;
             const string primgroup)
{
    vector min = getbbox_min(geometry, primgroup);
    vector max = getbbox_max(geometry, primgroup);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_isinbbox(const string geometry;
             const vector position;
             const string primgroup)
{
    vector min = getbbox_min(geometry, primgroup);
    vector max = getbbox_max(geometry, primgroup);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

#endif
