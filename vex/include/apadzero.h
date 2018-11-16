#ifndef _apadzero_
#define _apadzero_

string
apadzero(const int size; const int value)
{
    return sprintf(concat('%0', itoa(size), 'd'), value);
}

#endif
