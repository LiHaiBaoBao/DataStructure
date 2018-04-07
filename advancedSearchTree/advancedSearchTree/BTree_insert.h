//
//  BTree_insert.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_insert_h
#define BTree_insert_h

template <typename T> bool BTree<T>::insert(const T& e){
    BTNodePosi(T) v = search(e); if(v) return false;
    Rank r = _hot->key.search(e);
    _hot->key.insert(r + 1, e);
    _hot->child.insert(r + 2, NULL);
    _size++;
    solveOverflow(_hot);
    return true;
}

#endif /* BTree_insert_h */
