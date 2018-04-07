//
//  list_find.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_find_h
#define list_find_h

template <typename T>
ListNodePosi(T) List<T>::find(T const& e, int n, ListNodePosi(T) p) const{
    while(0 < n--)
        if(e == (p = p->pred)->data) return p;
    return NULL;
}


#endif /* list_find_h */
