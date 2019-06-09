#pragma once
#ifndef _AVL_MEDIANHIGH_H_
#define _AVL_MEDIANHIGH_H_

float
avl_medianhigh(const float sequence[])
{
    float sorted[] = sort(sequence);
    return sorted[len(sorted) / 2];
}

int
avl_medianhigh(const int sequence[])
{
    int sorted[] = sort(sequence);
    return sorted[len(sorted) / 2];
}

// Todo (1.0): vector2 avl_medianhigh(const vector2[])

// Todo (1.0): vector avl_medianhigh(const vector[])

// Todo (2.0): float avl_medianhigh(const float; const float; const float ...)

// Todo (2.0): int avl_medianhigh(const int; const int; const int ...)

#endif  // _AVL_MEDIANHIGH_H_
