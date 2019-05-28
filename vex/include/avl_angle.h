#pragma once
#ifndef _avl_angle_
#define _avl_angle_

float
avl_angle(const vector2 vec1; const vector2 vec2)
{
    return acos(dot(vec1, vec2) / sqrt(length2(vec1) * length2(vec2)));
}

float
avl_angle(const vector vec1; const vector vec2)
{
    return acos(dot(vec1, vec2) / sqrt(length2(vec1) * length2(vec2)));
}

#endif
