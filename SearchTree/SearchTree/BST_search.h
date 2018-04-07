//
//  BST_search.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/5.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_search_h
#define BST_search_h

template <typename T>//在以v为根的BST子树中查找关键码e
static BinNodePosi(T)& searchIn(BinNodePosi(T)& v, const T& e, BinNodePosi(T)& hot)
{
    if(!v || v==e) return v;
    hot = v;
    return searchIn( ((e<v->data) ? v->lc : v->rc), e, hot );
}

template <typename T> BinNodePosi(T) & BST<T>::search(const T& e)
{
    return searchIn( _root, e, _hot = NULL);
}


#endif /* BST_search_h */
