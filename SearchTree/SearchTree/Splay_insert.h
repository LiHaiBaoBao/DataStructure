//
//  Splay_insert.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/8.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_insert_h
#define Splay_insert_h

template <typename T> BinNodePosi(T) Splay<T>::insert(const T& e){
    if(!_root) { _size++; return _root = new BinNode<T>(e); }
    if(e == search(e)->data) return _root;
    _size++; BinNodePosi(T) t = _root;
    if(_root->data < e){
        t->parent = _root = new BinNode<T>(e, NULL, t, t->rc);
        if(HasRChild(*t)) { t->rc->parent = _root; t->rc = NULL; }
    }else{
        t->parent = _root = new BinNodePosi<T>(e, NULL, t->lc, t);
        if(HasLChild(*t)) { t->lc->parent = _root; t->lc = NULL; }
    }
    updateHeightAbove(t);
    return _root;
}

#endif /* Splay_insert_h */
