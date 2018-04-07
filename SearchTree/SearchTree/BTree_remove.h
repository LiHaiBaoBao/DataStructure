//
//  BTree_remove.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/12.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_remove_h
#define BTree_remove_h

template <typename T> bool BTree<T>::remove(const T& e){
    BTNodePosi(T) v = search(e); if(!v) return false;
    Rank r = v->key.search(e);
    if(v->child[0]){
        BTNodePosi(T) u = v->child[r+1];
        while(u->child[0]) u = u->child[0];
        v->key[r] = u->key[0]; v = u; r = 0;
    }
    v->key.remove(r); v->child.remove(r+1); _size--;
    solveUnderflow(v);
    return true;
}

#endif /* BTree_remove_h */
