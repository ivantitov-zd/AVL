#pragma once
#ifndef _AVL_ISCLOSED_H_
#define _AVL_ISCLOSED_H_

int
avl_isclosed(const int geometry; const int primnum)
{
    return primintrinsic(geometry, 'closed', primnum);
}

int
avl_isclosed(const string geometry; const int primnum)
{
    return primintrinsic(geometry, 'closed', primnum);
}

#endif  // _AVL_ISCLOSED_H_
