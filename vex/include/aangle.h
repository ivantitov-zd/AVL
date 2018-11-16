#ifndef _aangle_
#define _aangle_

float
aangle(const vector2 vec1; const vector2 vec2)
{
	return acos(dot(vec1, vec2) / (length(vec1) * length(vec2)));
}

float
aangle(const vector vec1; const vector vec2)
{
	return acos(dot(vec1, vec2) / (length(vec1) * length(vec2)));
}

#endif
