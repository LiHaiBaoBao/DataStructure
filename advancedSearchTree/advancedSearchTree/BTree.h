//
//  BTree.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_h
#define BTree_h

#include "BTNode.h"

template <typename T> class BTree{
protected:
    int _size;
    int _order;
    BTNodePosi(T) _root;
    BTNodePosi(T) _hot;
    void solveOverflow(BTNodePosi(T));
    void solveUnderflow(BTNodePosi(T));
public:
    BTree(int order = 3) : _order(order), _size(0)
    { root = new BTNode<T>(); }
    ~BTree() { if(_root) release(_root); }
    int const order() { return _order; }
    int const size() { return _size; }
    BTNodePosi(T) & root() { return _root; }
    bool empty() const { return !_root; }
    BTNodePosi(T) search(const T& e);
    bool insert(const T& e);
    bool remove(const T& e);
}

#endif /* BTree_h */
