#pragma once
#ifndef _avl_reversevertexorder_
#define _avl_reversevertexorder_

void
avl_reversevertexorder(const int geometry; const int primnum)
{
    int vertexCount = primvertexcount(geometry, primnum);
    int index;  // stores linear vertex index and point number
    for (int vtxnum = 0; vtxnum < vertexCount; ++vtxnum)
    {
        index = vertexindex(geometry, primnum, vertexCount - vtxnum);
        index = vertexpoint(geometry, index);
        setvertexpoint(geometry, primnum, vtxnum, index);
    }
}

#endif
