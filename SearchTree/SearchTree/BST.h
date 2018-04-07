//
//  BST.h
//  SearchTree
//
//  Created by hantianbao on 2017/8/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_h
#define BST_h

#include "../../binTree/binTree/binTree.h"

template <typename T> class BST : public BinTree<T>{
protected:
    BinNodePosi(T) _hot;
    BinNodePosi(T) connect34(
        BinNodePosi(T), BinNodePosi(T), BinNodePosi(T),
        BinNodePosi(T), BinNodePosi(T), BinNodePosi(T), BinNodePosi(T));
        BinNodePosi(T) rotateAt(BinNodePosi(T) x);
public:
    virtual BinNodePosi(T) &search(const T &e);
    virtual BinNodePosi(T) insert(const T &e);
    virtual bool remove(const T &e);
};

#include "BST_implementation.h"

#endif /* BST_h */
