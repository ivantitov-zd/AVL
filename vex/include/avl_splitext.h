#pragma once
#ifndef _AVL_SPLITEXT_H_
#define _AVL_SPLITEXT_H_

string
avl_splitext(const string filename)
{
    int fileNameLength = len(filename);
    if (fileNameLength < 2)  // Empty or too short filename
        return '';
    for (int i = --fileNameLength; i >= 0; --i)
    {
        if (filename[i] == '.')
            return filename[++i:];
        if (filename[i] == '/' || filename[i] == '\\')
            return '';
    }
    return '';
}

#endif  // _AVL_SPLITEXT_H_
