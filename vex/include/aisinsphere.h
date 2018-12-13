#ifndef _aisinsphere_
#define _aisinsphere_

int
aisinsphere(const vector position; const vector center; const float radius)
{
    return distance(position, center) <= radius;
}

#endif
