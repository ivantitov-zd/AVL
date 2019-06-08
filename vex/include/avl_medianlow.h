#pragma once
#ifndef _AVL_MEDIANLOW_H_
#define _AVL_MEDIANLOW_H_

float
avl_medianlow(const float sequence[])
{
    float sorted[] = sort(sequence);
    return sorted[(len(sorted) - 1) / 2];
}

int
avl_medianlow(const int sequence[])
{
    int sorted[] = sort(sequence);
    return sorted[(len(sorted) - 1) / 2];
}

// Todo (2.0): float avl_medianlow(const float; const float; const float ...)

// Todo (2.0): int avl_medianlow(const int; const int; const int ...)

#endif  // _AVL_MEDIANLOW_H_
