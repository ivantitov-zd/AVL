#pragma once
#ifndef _avl_isinside_
#define _avl_isinside_

int avl_isinside(const int geometry; const vector position)
{
    int primitive;
    vector hitPosition, uv;
    xyzdist(geometry, position, primitive, uv);
    hitPosition = primuv(geometry, 'P', primitive, uv);
    vector normal = prim_normal(geometry, primitive, uv);
    vector direction = normalize(hitPosition - position);
    if (dot(direction, normal) > 0)
        return 1;
    else
        return 0;
}

int avl_isinside(const string geometry; const vector position)
{
    int primitive;
    vector hitPosition, uv;
    xyzdist(geometry, position, primitive, uv);
    hitPosition = primuv(geometry, 'P', primitive, uv);
    vector normal = prim_normal(geometry, primitive, uv);
    vector direction = normalize(hitPosition - position);
    if (dot(direction, normal) > 0)
        return 1;
    else
        return 0;
}

#endif
