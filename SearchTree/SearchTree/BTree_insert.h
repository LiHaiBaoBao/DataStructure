//
//  BTree_insert.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_insert_h
#define BTree_insert_h

template <typename T> bool BTree<T>::insert(const T& e){
    BTNodePosi(T) v = search(e); if(v) return false;
    Rank r = _hot->key.search(e);
    _hot->key.insert(r+1, e);
    _hot->child.insert(r+2, NULL);
    _size++;
    solveOverflow(_hot);
    return true;
}

template <typename T>
void BTree<T>::solveOverflow(BTNodePosi(T) v){
    if(_order >= v->child.size()) return;
    Rank s = _order/2;
    BTNodePosi(T) u = new BTNode<T>();
    for(Rank j = 0; j < _order - s - 1; j++){
        u->child.insert(j, v->child.remove(s+1));
        u->key.insert(j, v->key.remove(s+1));
    }
    u->child[_order-s-1] = v->child.remove(s+1);
    if(u->child[0])
        for(Rank j = 0; j < _order - s; j++)
            u->child[j]->parent = u;
    BTNodePosi(T) p = v->parent;
    if(!p) { _root = p = new BTNode<T>(); p->child[0] = v; v->parent = p; }
    Rank r = 1 + p->key.search(v->key[0]);
    p->key.insert(r, v->key.remove(s));
    p->child.insert(r+1, u); u->parent = p;
    solveOverflow(p);
}

#endif /* BTree_insert_h */
