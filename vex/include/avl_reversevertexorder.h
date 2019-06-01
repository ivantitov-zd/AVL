#pragma once
#ifndef _AVL_REVERSEVERTEXORDER_H_
#define _AVL_REVERSEVERTEXORDER_H_

void
avl_reversevertexorder(const int geometry; const int primnum)
{
    int vertexCount = primvertexcount(geometry, primnum);
    int index;  // Stores linear vertex index and point number
    for (int vtxnum = 0; vtxnum < vertexCount; ++vtxnum)
    {
        index = vertexindex(geometry, primnum, vertexCount - vtxnum);
        index = vertexpoint(geometry, index);
        setvertexpoint(geometry, primnum, vtxnum, index);
    }
}

#endif  // _AVL_REVERSEVERTEXORDER_H_
