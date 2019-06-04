#pragma once
#ifndef _AVL_COPYVERTEXATTRIB_H_
#define _AVL_COPYVERTEXATTRIB_H_

int
avl_copyvertexattrib(const int srcGeometry;
                     const int dstGeometry;
                     const int srcVtxnum;
                     const int dstVtxnum;
                     const string attribName;
                     const string mode)
{
    int success = -1;
    int attribType = vertexattribtype(srcGeometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = vertexattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = vertex(srcGeometry, attribName, srcVtxnum);
        success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = vertex(srcGeometry, attribName, srcVtxnum);
        success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = vertexattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = vertex(srcGeometry, attribName, srcVtxnum);
            success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = vertex(srcGeometry, attribName, srcVtxnum);
        success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = vertex(srcGeometry, attribName, srcVtxnum);
        success = setvertexattrib(dstGeometry, attribName, dstVtxnum, -1, value, mode);
    } else
    {
        error('Copy Attribute AVL: Unknown type');
        return success;
    }
    string attribTypeInfo = vertexattribtypeinfo(srcGeometry, attribName);
    setattribtypeinfo(dstGeometry, 'vertex', attribName, attribTypeInfo);
    return success;
}

#endif  // _AVL_COPYVERTEXATTRIB_H_
