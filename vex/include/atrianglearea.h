#ifndef _atrianglearea_
#define _atrianglearea_

float
atrianglearea(const vector vertex1; const vector vertex2; const vector vertex3)
{
    float edge_1_2 = length(vertex1 - vertex2);
    float edge_1_3 = length(vertex1 - vertex3);
    float edge_2_3 = length(vertex2 - vertex3);
    float sp = (edge_1_2 + edge_1_3 + edge_2_3) / 2;
    return pow(sp * (sp - edge_1_2) * (sp - edge_1_3) * (sp - edge_2_3), 0.5);
}

#endif
