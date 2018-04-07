//
//  AVL.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef AVL_h
#define AVL_h

#include "BST.h"
template <typename T> class AVL : public BST<T>{
public:
    BinNodePosi(T) insert(const T& e);
    bool remove(const T& e);
}

#define Balanced(x) ( stature((x).rc) == stature((x).lc) )
#define BalFac(x) ( stature((x).lc) - stature((x).rc) )
#define AvlBalanced ( (-2 < BalFac(x)) && (BalFac(x) < 2) )

#define tallerChild(x) (\
    stature( (x)->lc ) > stature( (x)->rc ) ? (x)->lc : ( \
    stature( (x)->lc ) < stature( (x)->rc ) ? (x)->rc : ( \
    IsLChild( *(x) ) ? (x)->lc : (x)->rc  \
    )\
    )\
)

#include "AVL_implementation.h"

#endif /* AVL_h */
