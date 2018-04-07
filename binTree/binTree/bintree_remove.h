//
//  bintree_remove.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef bintree_remove_h
#define bintree_remove_h

template <typename T>
int BinTree<T>::remove(BinNodePosi(T) x){
    FromParentTo(*x) = NULL;
    updateHeightAbove(x->parent);
    int n = removeAt(x); _size -= n; return n;
}

template <typename T>
static int removeAt(BinNodePosi(T) x){
    if(!x) return 0;
    int n = 1 + removeAt(x->lc) + removeAt(x->rc);
    release(x->data); release(x); return n;
}

#endif /* bintree_remove_h */
