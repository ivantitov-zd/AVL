#pragma once
#ifndef _avl_copyprimattrib_
#define _avl_copyprimattrib_

int
avl_copyprimattrib(const int srcGeometry;
                   const int dstGeometry;
                   const int srcPrimnum;
                   const int dstPrimnum;
                   const string attribName;
                   const string mode)
{
    int success = -1;
    int attribType = primattribtype(srcGeometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = primattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = prim(srcGeometry, attribName, srcPrimnum);
        success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = prim(srcGeometry, attribName, srcPrimnum);
        success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = primattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = prim(srcGeometry, attribName, srcPrimnum);
            success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = prim(srcGeometry, attribName, srcPrimnum);
        success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = prim(srcGeometry, attribName, srcPrimnum);
        success = setprimattrib(dstGeometry, attribName, dstPrimnum, value, mode);
    } else
    {
        error('AVL Copy Attrib: Unknown type');
        return success;
    }
    string attribTypeInfo = primattribtypeinfo(srcGeometry, attribName);
    setattribtypeinfo(dstGeometry, 'prim', attribName, attribTypeInfo);
    return success;
}

#endif
