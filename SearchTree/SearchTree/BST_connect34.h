//
//  BST_connect34.h
//  SearchTree
//
//  Created by hantianbao on 2017/12/21.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_connect34_h
#define BST_connect34_h

template <typename T> BinNodePosi(T) BST<T>::connect34(
    BinNodePosi(T) a, BinNodePosi(T) b, BinNodePosi(T) c,
    BinNodePosi(T) T0, BinNodePosi(T) T1, BinNodePosi(T) T2, BinNodePosi(T) T3
){
    a->lc = T0; if(T0) T0->parent = a;
    a->rc = T1; if(T1) T1->parent = a; updateHeight(a);
    c->lc = T2; if(T2) T2->parent = c;
    c->rc = T3; if(T3) T3->parent = c; updateHeight(c);
    b->lc = a; a->parent = b;
    b->rc = c; c->parent = b; updateHeight(b);
    return b;
}

#endif /* BST_connect34_h */
