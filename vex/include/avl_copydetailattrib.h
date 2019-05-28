#pragma once
#ifndef _avl_copydetailattrib_
#define _avl_copydetailattrib_

int
avl_copydetailattrib(const int srcGeometry;
                     const int dstGeometry;
                     const string attribName;
                     const string mode)
{
    int success = -1;
    int attribType = detailattribtype(srcGeometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = detailattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = detail(srcGeometry, attribName);
        success = setdetailattrib(dstGeometry, attribName, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = detail(srcGeometry, attribName);
        success = setdetailattrib(dstGeometry, attribName, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = detailattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = detail(srcGeometry, attribName);
            success = setdetailattrib(dstGeometry, attribName, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = detail(srcGeometry, attribName);
        success = setdetailattrib(dstGeometry, attribName, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = detail(srcGeometry, attribName);
        success = setdetailattrib(dstGeometry, attribName, value, mode);
    } else
    {
        error('AVL Copy Attrib: Unknown type');
        return success;
    }
    string attribTypeInfo = detailattribtypeinfo(srcGeometry, attribName);
    setattribtypeinfo(dstGeometry, 'detail', attribName, attribTypeInfo);
    return success;
}

#endif
