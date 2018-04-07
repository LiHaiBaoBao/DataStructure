//
//  list_search.h
//  List
//
//  Created by hantianbao on 2017/1/3.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_search_h
#define list_search_h

template <typename T>
ListNodePosi(T) List<T>::search(T const& e, int n, ListNodePosi(T) p) const{
    while(0 < n--)
        if( ( (p = p->pred)->data) <= e) break;
    return p;
}

#endif /* list_search_h */
