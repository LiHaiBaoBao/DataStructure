//
//  Splay.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/7.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_h
#define Splay_h

#include "BST.h"
template <typename T> class Splay : public BST<T>{
protected:
    BinNodePosi(T) splay(BinNodePosi(T) v);
public:
    BinNodePosi(T)& search(const T& e);
    BinNodePosi(T) insert(const T& e);
    bool remove(const T& e);
}

#include "Splay_implementation.h"

#endif /* Splay_h */
