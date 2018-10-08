#ifndef _aangle_
#define _aangle_

float
aangle(vector2 vec1; vector2 vec2)
{
	return acos(dot(vec1, vec2) / (length(vec1) * length(vec2));
}

float
aangle(vector vec1; vector vec2)
{
	return acos(dot(vec1, vec2) / (length(vec1) * length(vec2));
}

#endif
