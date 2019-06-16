#pragma once
#ifndef _AVL_REMOVEVERTEX_H_
#define _AVL_REMOVEVERTEX_H_

void
avl_removevertex(const int geohandle;
                 const int primnum;
                 const int vtxnum)
{
    int destinationPoint = addpoint(geohandle, {0.0, 0.0, 0.0});
    setvertexpoint(geohandle, primnum, vtxnum, destinationPoint);
    removepoint(geohandle, destinationPoint);
}

void
avl_removevertex(const int geohandle;
                 const int primnum;
                 const int vtxnum;
                 const int mode)
{
    if (mode == 1)
    {
        int sourcePoint;
        if (primnum == -1)
            sourcePoint = vertexpoint(geohandle, vtxnum);
        else
            sourcePoint = vertexpoint(geohandle, primvertex(geohandle,
                                                            primnum,
                                                            vtxnum));
        int connectedVertexCount = len(pointvertices(geohandle, sourcePoint));
        if (connectedVertexCount == 1)
            removepoint(geohandle, sourcePoint);
        else
            avl_removevertex(geohandle, primnum, vtxnum);
    } else
        avl_removevertex(geohandle, primnum, vtxnum);
}

void
avl_removevertex(const int geohandle; const int vtxnum)
{
    avl_removevertex(geohandle, -1, vtxnum);
}

#endif  // _AVL_REMOVEVERTEX_H_
