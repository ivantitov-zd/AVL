#pragma once
#ifndef _AVL_DIFF_H_
#define _AVL_DIFF_H_
// Prototype
void
avl_diff(const string str1; const string str2)
{
    int add[];
    int remove[];
    int index1 = 0;
    int index2 = 0;
    int str1Length = len(str1);
    int str2Length = len(str2);
    while (index1 < str1Length || index2 < str2Length)
        if (str1[index1] == str2[index2])
        {
            printf('\ni1:%g(%g)\ni2:%g(%g)\n',
            index1, str1[index1], index2, str2[index2]);
            ++index1;
            ++index2;
        } else if (str1[index1] == '')
        {
            append(add, index2++);
        } else if (str2[index2] == '')
        {
            append(remove, index1++);
        } else
        {
            append(add, index2++);
        }
    printf('\nRemove:%g\nAdd:%g\n', remove, add);
}

#endif  // _AVL_DIFF_H_
