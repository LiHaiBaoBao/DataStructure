//
//  BST_remove.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/5.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_remove_h
#define BST_remove_h

template <typename T> bool BST<T>::remove(const T& e){
    BinNodePosi(T)& x = search(e); if(!x) return false;
    removeAt(x, _hot); _size--;
    updateHeightAbove(_hot);
    return true;
}

template <typename T>
static BinNodePosi(T) removeAt(BinNodePosi(T)& x, BinNodePosi(T)& hot){
    BinNodePosi(T) w = x;
    BinNodePosi(T) succ = NULL;
    if(!HasLChild(*x))
        succ = x = x->rc;
    else if(!HasRChild(*x))
        succ = x = x->lc;
    else{
        w = w->succ();
        swap(x->data, w->data);
        BinNodePosi(T) u = w->parent;
        ( ( u == x) ? u->rc, u->lc ) = succ = w->rc;
    }
    hot = w->parent;
    if(succ) succ->parent = hot;
    release(w->data); release(w); return succ;
}

#endif /* BST_remove_h */
