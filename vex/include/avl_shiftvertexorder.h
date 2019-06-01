#pragma once
#ifndef _AVL_SHIFTVERTEXORDER_H_
#define _AVL_SHIFTVERTEXORDER_H_

void
avl_shiftvertexorder(const int geometry;
                     const int primnum;
                     const int shift)
{
    int vertexCount = primvertexcount(geometry, primnum);
    int index;  // Stores linear vertex index and point number
    for (int vtxnum = 0; vtxnum < vertexCount; ++vtxnum)
    {
        index = vertexindex(geometry, primnum, (vtxnum - shift) % vertexCount);
        index = vertexpoint(geometry, index);
        setvertexpoint(geometry, primnum, vtxnum, index);
    }
}

#endif  // _AVL_SHIFTVERTEXORDER_H_
