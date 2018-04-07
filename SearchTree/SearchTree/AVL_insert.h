//
//  AVL_insert.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef AVL_insert_h
#define AVL_insert_h

template <typename T> BinNodePosi(T) AVL<T>::insert(const T& e){
    BinNodePosi(T)& x = search(e); if(x) return x;
    BinNodePosi(T) xx= x = new BinNode<T>(e, _hot); _size++;
    for(BinNodePosi(T) g = _hot; g; g = g->parent){
        if(!AvlBalanced(*g)){
            FromParentTo(*g) = rotateAt( tallerChild( tallerChild(g) ) );
            break;
        }else
            updateHeight(g);
        
    }
    return xx;
}

#endif /* AVL_insert_h */
