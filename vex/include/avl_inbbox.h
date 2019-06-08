#pragma once
#ifndef _AVL_INBBOX_H_
#define _AVL_INBBOX_H_

int
avl_inbbox(const vector minimum;
           const vector maximum;
           const vector position)
{
    return position.x > minimum.x && position.x < maximum.x &&
           position.y > minimum.y && position.y < maximum.y &&
           position.z > minimum.z && position.z < maximum.z;
}

int
avl_inbbox(const int geometry; const vector position)
{
    vector min = getbbox_min(geometry);
    vector max = getbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_inbbox(const string geometry; const vector position)
{
    vector min = getbbox_min(geometry);
    vector max = getbbox_max(geometry);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

int
avl_inbbox(const int geometry;
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
avl_inbbox(const string geometry;
           const vector position;
           const string primgroup)
{
    vector min = getbbox_min(geometry, primgroup);
    vector max = getbbox_max(geometry, primgroup);
    return position.x > min.x && position.x < max.x &&
           position.y > min.y && position.y < max.y &&
           position.z > min.z && position.z < max.z;
}

#endif  // _AVL_INBBOX_H_
