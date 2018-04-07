//
//  Splay_remove.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_remove_h
#define Splay_remove_h

template <typename T> bool Splay<T>::remove(const T& e){
    if(!_root || (e != search(e)->data)) return false;
    BinNodePosi(T) w = _root;
    if(!HasLChild(*_root)){
        _root = _root->rc; if(_root) _root->parent = NULL);
    }else if(!HasRChild(*root)){
        _root = _root->lc; if(_root) _root->parent = NULL;
    }else{
        BinNodePosi(T) lTree = _root->lc;
        lTree->parent = NULL; _root->lc = NULL;
        _root = _root->rc; _root->parent = NULL;
        search(w->data);
        
        _root->lc = lTree; lTree->parent = _root;
    }
    release(w->data); release(w); _size--;
    if(_root) updateHeight(_root);
    return true;
}

#endif /* Splay_remove_h */
