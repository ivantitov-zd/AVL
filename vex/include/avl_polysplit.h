#pragma once
#ifndef _AVL_POLYSPLIT_H_
#define _AVL_POLYSPLIT_H_

void
avl_polysplit(const int geohandle; const int primnum)
{
    int points[] = primpoints(geohandle, primnum);
    int newPoint;
    foreach (int vtxnum; int point; points)
    {
        newPoint = addpoint(geohandle, point);
        setvertexpoint(geohandle, primnum, vtxnum, newPoint);
    }
}

#endif  // _AVL_POLYSPLIT_H_
