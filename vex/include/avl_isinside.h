#pragma once
#ifndef _AVL_ISINSIDE_H_
#define _AVL_ISINSIDE_H_

int avl_isinside(const int geometry; const vector position)
{
    int primitive;
    vector uvw;
    xyzdist(geometry, position, primitive, uvw);
    vector hitPosition = primuv(geometry, 'P', primitive, uvw);
    vector normal = prim_normal(geometry, primitive, uvw);
    vector direction = normalize(hitPosition - position);
    if (dot(direction, normal) > 0.0)
        return 1;
    else
        return 0;
}

int avl_isinside(const string geometry; const vector position)
{
    int primitive;
    vector uvw;
    xyzdist(geometry, position, primitive, uvw);
    vector hitPosition = primuv(geometry, 'P', primitive, uvw);
    vector normal = prim_normal(geometry, primitive, uvw);
    vector direction = normalize(hitPosition - position);
    if (dot(direction, normal) > 0.0)
        return 1;
    else
        return 0;
}

#endif  // _AVL_ISINSIDE_H_
