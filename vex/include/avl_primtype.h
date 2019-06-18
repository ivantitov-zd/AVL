#pragma once
#ifndef _AVL_PRIMTYPE_H_
#define _AVL_PRIMTYPE_H_

#define AVL_PRIMTYPE_POLY 1
#define AVL_PRIMTYPE_NURBCURVE 2
#define AVL_PRIMTYPE_BEZIERCURVE 3
#define AVL_PRIMTYPE_MESH 4
#define AVL_PRIMTYPE_NURBMESH 5
#define AVL_PRIMTYPE_BEZIERMESH 6
#define AVL_PRIMTYPE_CIRCLE 8
#define AVL_PRIMTYPE_SPHERE 9
#define AVL_PRIMTYPE_TUBE 10
#define AVL_PRIMTYPE_PART 11
#define AVL_PRIMTYPE_METABALL 12
#define AVL_PRIMTYPE_METASQUAD 13
#define AVL_PRIMTYPE_VOLUME 20
#define AVL_PRIMTYPE_TETRAHEDRON 21
#define AVL_PRIMTYPE_POLYSOUP 22
#define AVL_PRIMTYPE_VDB 23
#define AVL_PRIMTYPE_PACKEDGEOMETRY 24
#define AVL_PRIMTYPE_PACKEDDISK 25
#define AVL_PRIMTYPE_PACKEDAGENT 27
#define AVL_PRIMTYPE_PACKEDDISKSEQUENCE 28
#define AVL_PRIMTYPE_ALEMBICREF 29

int
avl_primtype(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'typeid', primnum);
}

int
avl_primtype(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'typeid', primnum);
}

#endif  // _AVL_PRIMTYPE_H_
