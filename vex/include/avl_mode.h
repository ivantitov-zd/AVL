#pragma once
#ifndef _AVL_MODE_H_
#define _AVL_MODE_H_

#include "avl_unique.h"
#include "avl_count.h"
#include "avl_maxindex.h"

int
avl_mode(const int sequence[])
{
    int sequenceLength = len(sequence);
    int uniqueItems[] = avl_unique(sort(sequence));
    int counts[];
    resize(counts, len(uniqueItems));
    foreach (int index; int value; uniqueItems)
        counts[index] = avl_count(sequence, value);
    return uniqueItems[avl_maxindex(counts)];
}

#endif  // _AVL_MODE_H_
