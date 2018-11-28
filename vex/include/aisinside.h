#ifndef _aisinside_
#define _aisinside_

int aisinside(const int geometry; const vector position)
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

int aisinside(const string geometry; const vector position)
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
