#pragma once
#ifndef _AVL_COPYPOINTATTRIB_H_
#define _AVL_COPYPOINTATTRIB_H_

int
avl_copypointattrib(const int geometry;
                    const int geohandle;
                    const int srcPtnum;
                    const int dstPtnum;
                    const string attribName;
                    const string mode)
{
    int success = -1;
    int attribType = pointattribtype(geometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = pointattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = point(geometry, attribName, srcPtnum);
        success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = point(geometry, attribName, srcPtnum);
        success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = pointattribsize(geometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = point(geometry, attribName, srcPtnum);
            success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
        } else
        {
            error('Copy Attribute AVL: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = point(geometry, attribName, srcPtnum);
        success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = point(geometry, attribName, srcPtnum);
        success = setpointattrib(geohandle, attribName, dstPtnum, value, mode);
    } else
    {
        error('Copy Attribute AVL: Unknown type');
        return success;
    }
    string attribTypeInfo = pointattribtypeinfo(geometry, attribName);
    setattribtypeinfo(geohandle, 'point', attribName, attribTypeInfo);
    return success;
}

#endif  // _AVL_COPYPOINTATTRIB_H_
