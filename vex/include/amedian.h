#ifndef _amedian_
#define _amedian_

float
amedian(float array_[])
{
    float sorted[] = sort(array_);
    int arrayLength = len(sorted);
    if (arrayLength % 2 == 0)
    {
        return avg(sorted[arrayLength/2-1], sorted[arrayLength/2]);
    } else {
        return sorted[arrayLength/2];
    }
}

float
amedian(int array_[])
{
    int sorted[] = sort(array_);
    int arrayLength = len(sorted);
    if (arrayLength % 2 == 0)
    {
        return avg(sorted[arrayLength/2-1], sorted[arrayLength/2]);
    } else {
        return sorted[arrayLength/2];
    }
}

#endif
