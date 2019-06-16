#pragma once
#ifndef _AVL_COPYPRIMATTRIB_H_
#define _AVL_COPYPRIMATTRIB_H_

int
avl_copyprimattrib(const int geometry;
                   const int geohandle;
                   const int srcPrimnum;
                   const int dstPrimnum;
                   const string attribName;
                   const string mode)
{
    int success = -1;
    int attribType = primattribtype(geometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = primattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = prim(geometry, attribName, srcPrimnum);
        success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = prim(geometry, attribName, srcPrimnum);
        success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = primattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = prim(geometry, attribName, srcPrimnum);
            success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = prim(geometry, attribName, srcPrimnum);
        success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = prim(geometry, attribName, srcPrimnum);
        success = setprimattrib(geohandle, attribName, dstPrimnum, value, mode);
    } else
    {
        error('Copy Attribute AVL: Unknown type');
        return success;
    }
    string attribTypeInfo = primattribtypeinfo(geometry, attribName);
    setattribtypeinfo(geohandle, 'prim', attribName, attribTypeInfo);
    return success;
}

#endif  // _AVL_COPYPRIMATTRIB_H_
