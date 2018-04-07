//
//  AVL_remove.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef AVL_remove_h
#define AVL_remove_h

template <typename T> bool AVL<T>::remove(const T& e){
    BinNodePosi(T)& x = search(e); if(!x) return false;
    removeAt(x, _hot); _size--;
    for(BinNodePosi(T) g = _hot; g; g = g->parent){
        if(!AvlBalanced(*g))
            g = FromParentTo(*g) = rotateAt( tallerChild( tallerChild(g) ) );
        updateHeight(g);
    }
    return true;
}

#endif /* AVL_remove_h */
