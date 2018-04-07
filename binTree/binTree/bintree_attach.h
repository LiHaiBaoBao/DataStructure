//
//  bintree_attach.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef bintree_attach_h
#define bintree_attach_h

template <typename T>
BinNodePosi(T) BinTree<T>::attachAsLC(BinNodePosi(T) x, BinTree<T>* &S){
    if(x->lc = S->_root) x->lc->parent = x;
    _size += S->_size; updateHeightAbove(x);
    S->_root = NULL; S->_size = 0; release(S); S = NULL; return x;
}

template <typename T>
BinNodePosi(T) BinTree<T>::attachAsRC(BinNodePosi(T) x, BinTree<T>* &S){
    if(x->rc = S->_root) x->rc->parent = x;
    _size += S->_size; updateHeightAbove(x);
    S->_root = NULL; S->_size = 0; release(S); S = NULL; return x;
}


#endif /* bintree_attach_h */
