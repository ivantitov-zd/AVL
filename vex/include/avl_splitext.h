#pragma once
#ifndef _avl_splitext_
#define _avl_splitext_

string
avl_splitext(const string filename)
{
    int fileNameLength = len(filename);
    if (fileNameLength == 0) return '';
    for (int i = --fileNameLength; i >= 0; --i)
    {
        if (filename[i] == '.')
            return filename[++i:];
        if (filename[i] == '/' || filename[i] == '\\')
            return '';
    }
    return '';
}

#endif
