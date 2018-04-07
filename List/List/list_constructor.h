//
//  list_constructor.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_constructor_h
#define list_constructor_h

template <typename T>
void List<T>::copyNodes(ListNodePosi(T) p, int n)
{
    init();
    while(n--) { insertAsLast(p->data); p = p->succ; }
}

template <typename T>
List<T>::List(ListNodePosi(T) p, int n) { copyNodes(p, n); }

template <typename T>
List<T>::List(List<T> const& L) { copyNodes(L.first(), L._size); }

template <typename T>
List<T>::List(List<T> const& L, int r, int n) { copyNodes(L[r], n); }

#endif /* list_constructor_h */
