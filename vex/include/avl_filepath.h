#pragma once
#ifndef _AVL_FILEPATH_H_
#define _AVL_FILEPATH_H_

#include "avl_splitext.h"

struct avl_filepath
{
    string filepath;
    void set(const string path)
    {
        //
    }
    string folderPath()
    {
        //
    }
    string folderName()
    {
        //
    }
    string fileName()
    {
        //
    }
    string exntension()
    {
        return avl_splitext(this.filepath);
    }
    string fileNameWithExtension()
    {
        return concat(this->fileName(), '.', this->exntension())
    }
    int isNetwork()
    {
        return startswith(this.filepath, '//') || startswith(this.filepath, '\\\\');
    }
    int isWeb()
    {
        return startswith(this.filepath, 'http') || startswith(this.filepath, 'www');
    }
    int isLocal()
    {
        return !(this->isNetwork() || this->isWeb());
    }
}

#endif  // _AVL_FILEPATH_H_
