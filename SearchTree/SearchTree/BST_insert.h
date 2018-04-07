//
//  BST_insert.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/5.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_insert_h
#define BST_insert_h

template <typename T> BinNodePosi(T) BST<T>::insert(const T& e){
    BinNodePosi(T)& x = search(e); if(x) return x;
    x = new BinNode<T>(e, _hot);
    _size++;
    updateHeightAbove(x);
    return x;
}

#endif /* BST_insert_h */
