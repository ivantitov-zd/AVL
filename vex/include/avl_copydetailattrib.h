#pragma once
#ifndef _AVL_COPYDETAILATTRIB_H_
#define _AVL_COPYDETAILATTRIB_H_

int
avl_copydetailattrib(const int geometry;
                     const int geohandle;
                     const string attribName;
                     const string mode)
{
    int success = -1;
    int attribType = detailattribtype(geometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = detailattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = detail(geometry, attribName);
        success = setdetailattrib(geohandle, attribName, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = detail(geometry, attribName);
        success = setdetailattrib(geohandle, attribName, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = detailattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = detail(geometry, attribName);
            success = setdetailattrib(geohandle, attribName, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = detail(geometry, attribName);
        success = setdetailattrib(geohandle, attribName, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = detail(geometry, attribName);
        success = setdetailattrib(geohandle, attribName, value, mode);
    } else
    {
        error('Copy Attribute AVL: Unknown type');
        return success;
    }
    string attribTypeInfo = detailattribtypeinfo(geometry, attribName);
    setattribtypeinfo(geohandle, 'detail', attribName, attribTypeInfo);
    return success;
}

#endif  // _AVL_COPYDETAILATTRIB_H_
