#pragma once
#ifndef _AVL_POINTCURVATURE_H_
#define _AVL_POINTCURVATURE_H_

float
avl_pointcurvature(const int geometry; const int ptnum)
{
    int pointNeighbours[] = neighbours(geometry, ptnum);
    vector directions = {0.0, 0.0, 0.0};
    vector pointPosition = point(geometry, 'P', ptnum);
    foreach (int neighbourPoint; pointNeighbours)
        directions += normalize(pointPosition - point(geometry, 'P', neighbourPoint));
    vector pointNormal = normalize(vector(point(geometry, 'N', ptnum)));
    return dot(pointNormal, directions / len(pointNeighbours));
}

float
avl_pointcurvature(const string geometry; const int ptnum)
{
    int pointNeighbours[] = neighbours(geometry, ptnum);
    vector directions = {0.0, 0.0, 0.0};
    vector pointPosition = point(geometry, 'P', ptnum);
    foreach (int neighbourPoint; pointNeighbours)
        directions += normalize(pointPosition - point(geometry, 'P', neighbourPoint));
    vector pointNormal = normalize(vector(point(geometry, 'N', ptnum)));
    return dot(pointNormal, directions / len(pointNeighbours));
}

#endif  // _AVL_POINTCURVATURE_H_
