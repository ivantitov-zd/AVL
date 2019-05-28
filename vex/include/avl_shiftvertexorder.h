#pragma once
#ifndef _avl_shiftvertexorder_
#define _avl_shiftvertexorder_

void
avl_shiftvertexorder(const int geometry;
                     const int primnum;
                     const int shift)
{
    int vertexCount = primvertexcount(geometry, primnum);
    int index;  // stores linear vertex index and point number
    for (int vtxnum = 0; vtxnum < vertexCount; ++vtxnum)
    {
        index = vertexindex(geometry, primnum, (vtxnum - shift) % vertexCount);
        index = vertexpoint(geometry, index);
        setvertexpoint(geometry, primnum, vtxnum, index);
    }
}

#endif
