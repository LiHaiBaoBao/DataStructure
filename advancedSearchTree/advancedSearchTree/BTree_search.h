//
//  BTree_search.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_search_h
#define BTree_search_h

template <typename T> BTNodePosi(T) BTree<T>::search(const T& e){
    BTNodePosi(T) v = _root; _hot = NULL;
    while(v){
        Rank r = v->key.search(e);
        if( (0<=r) && (e==v->key[r]) ) return v;
        _hot = v; v = v->child[r+1];
    }
    return NULL;
}

#endif /* BTree_search_h */
