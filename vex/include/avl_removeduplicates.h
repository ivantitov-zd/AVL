#pragma once
#ifndef _AVL_REMOVEDUPLICATES_H_
#define _AVL_REMOVEDUPLICATES_H_

string
avl_removeduplicates(const string text; const string character)
{
    string newText = text[0];
    string current;
    for (int i = 1; i < len(text); ++i)
    {
        current = text[i];
        if (current == character && text[i-1] == current)
            continue;
        else
            append(newText, current);
    }
    return newText;
}

string
avl_removeduplicates(const string text)
{
    return avl_removeduplicates(text, ' ');
}

#endif  // _AVL_REMOVEDUPLICATES_H_
