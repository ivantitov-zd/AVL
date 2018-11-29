#ifndef _amedian_
#define _amedian_

float
amedian(const float array_[])
{
    float sorted[] = sort(array_);
    int arrayLength = len(sorted);
    if (arrayLength % 2 == 0)
        return avg(sorted[(arrayLength-1)/2], sorted[arrayLength/2]);
    else
        return sorted[arrayLength/2];
}

float
amedian(const int array_[])
{
    int sorted[] = sort(array_);
    int arrayLength = len(sorted);
    if (arrayLength % 2 == 0)
        return avg(sorted[(arrayLength-1)/2], sorted[arrayLength/2]);
    else
        return sorted[arrayLength/2];
}

float
amedianlow(const float array_[])
{
    float sorted[] = sort(array_);
    return sorted[(len(sorted)-1)/2];
}

int
amedianlow(const int array_[])
{
    int sorted[] = sort(array_);
    return sorted[(len(sorted)-1)/2];
}

float
amedianhigh(const float array_[])
{
    float sorted[] = sort(array_);
    return sorted[len(sorted)/2];
}

int
amedianhigh(const int array_[])
{
    int sorted[] = sort(array_);
    return sorted[len(sorted)/2];
}

#endif
