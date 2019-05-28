#pragma once
#ifndef _avl_sphericaldistance_
#define _avl_sphericaldistance_

float
avl_sphericaldistance(const vector position1; const vector position2)
{
    return acos(dot(position1, position2)) * float(length(position1));
}

#endif
