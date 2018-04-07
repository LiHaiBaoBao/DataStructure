//
//  Splay_search.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_search_h
#define Splay_search_h

template <typename T> BinNodePosi(T) & Splay<T>::search(const T& e){
    BinNodePosi(T) p = searchIn(_root, e, _hot = NULL);
    _root = splay(p ? p : _hot);
    return _root;
}

#endif /* Splay_search_h */
