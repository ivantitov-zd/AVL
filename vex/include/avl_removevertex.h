#pragma once
#ifndef _AVL_REMOVEVERTEX_H_
#define _AVL_REMOVEVERTEX_H_

void
avl_removevertex(const int geometry;
                 const int primnum;
                 const int vtxnum)
{
    int destinationPoint = addpoint(geometry, {0.0, 0.0, 0.0});
    setvertexpoint(geometry, primnum, vtxnum, destinationPoint);
    removepoint(geometry, destinationPoint);
}

void
avl_removevertex(const int geometry;
                 const int primnum;
                 const int vtxnum;
                 const int mode)
{
    if (mode == 1)
    {
        int sourcePoint;
        if (primnum == -1)
            sourcePoint = vertexpoint(geometry, vtxnum);
        else
            sourcePoint = vertexpoint(geometry, primvertex(geometry,
                                                           primnum,
                                                           vtxnum));
        int connectedVertexCount = len(pointvertices(geometry, sourcePoint));
        if (connectedVertexCount == 1)
            removepoint(geometry, sourcePoint);
        else
            avl_removevertex(geometry, primnum, vtxnum);
    } else
        avl_removevertex(geometry, primnum, vtxnum);
}

void
avl_removevertex(const int geometry; const int vtxnum)
{
    avl_removevertex(geometry, -1, vtxnum);
}

#endif  // _AVL_REMOVEVERTEX_H_
