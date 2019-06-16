#pragma once
#ifndef _AVL_POLYVOLUME_H_
#define _AVL_POLYVOLUME_H_

#include "avl_trinormal.h"
#include "avl_trivolume.h"

float
avl_polyvolume(const vector origin; const vector vertices[])  // Todo: optimize
{
    if (len(vertices) < 3)
        error('Number of points must be greater than 3');  // Todo: rework
    float volume = 0.0;
    float value = 0.0;
    vector norm = avl_trinormal(vertices[0],
                                     vertices[1],
                                     vertices[2]);
    vector centroid = avg(vertices);
    for (int i = -1; i < len(vertices)-1; ++i)
    {
        value = avl_trivolume(origin,
                                   vertices[0],
                                   vertices[i],
                                   vertices[i+1]);
        if (dot(norm, centroid) < 0.0)
            volume += value;
        else
            volume -= value;
    }
    return abs(volume);
}

// Todo (2.0): float polyvolume(const vector; const vector ...)

#endif  // _AVL_POLYVOLUME_H_
