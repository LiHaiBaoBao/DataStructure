//
//  Btree.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Btree_h
#define Btree_h

#include "BTNode.h"
template <typename T> class BTree{
protected:
    int _size;
    int _order;
    BTNodePosi(T) _root;
    BTNodePosi(T) _hot;
    void solveOverflow;
    void solveUnderflow;
public:
    BTree(int order = 1) : _order(order), _size(0);
    { _root = new BTNode<T>(); }
    ~Btree() { if(_root) release(_root); }
    int const order() { return _order; }
    int const size() { return _size; }
    BTNodePosi(T)& root() { return _root; }
    bool empty() const { return !_root; }
    BTNodePosi(T) search(const T& e);
    bool insert(const T& e);
    bool remove(const T& e);
}

#endif /* Btree_h */
