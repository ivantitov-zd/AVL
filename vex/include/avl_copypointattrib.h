#pragma once
#ifndef _avl_copypointattrib_
#define _avl_copypointattrib_

int
avl_copypointattrib(const int srcGeometry;
                    const int dstGeometry;
                    const int srcPtnum;
                    const int dstPtnum;
                    const string attribName;
                    const string mode)
{
    int success = -1;
    int attribType = pointattribtype(srcGeometry, attribName);
    if (attribType == 1)  // Float-based attributes
    {
        int attribSize = pointattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 0)  // Integer
    {
        int value = point(srcGeometry, attribName, srcPtnum);
        success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
    } else if (attribType == 2)  // String
    {
        string value = point(srcGeometry, attribName, srcPtnum);
        success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
    } else if (attribType == 4)  // Float-based Array
    {
        int attribSize = pointattribsize(srcGeometry, attribName);
        if (attribSize == 1)  // Float
        {
            float value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 3)  // Vector
        {
            vector value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 4)  // Vector4 or Matrix2
        {
            vector4 value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 9)  // Matrtix3
        {
            matrix3 value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 16)  // Matrix
        {
            matrix value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else if (attribSize == 2)  // Vector2
        {
            vector2 value[] = point(srcGeometry, attribName, srcPtnum);
            success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
        } else
        {
            error('AVL Copy Attrib: Unknown size');
            return success;
        }
    } else if (attribType == 3)  // Array of Integers
    {
        int value[] = point(srcGeometry, attribName, srcPtnum);
        success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
    } else if (attribType == 5)  // Array of Strings
    {
        string value[] = point(srcGeometry, attribName, srcPtnum);
        success = setpointattrib(dstGeometry, attribName, dstPtnum, value, mode);
    } else
    {
        error('AVL Copy Attrib: Unknown type');
        return success;
    }
    string attribTypeInfo = pointattribtypeinfo(srcGeometry, attribName);
    setattribtypeinfo(dstGeometry, 'point', attribName, attribTypeInfo);
    return success;
}

#endif
