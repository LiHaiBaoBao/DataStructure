//
//  list_remove.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_remove_h
#define list_remove_h

template <typename T> T List<T>::remove(ListNodePosi(T) p){
    T e = p->data;
    p->pred->succ = p->succ; p->succ->pred = p->pred;
    delete p; _size--;
    return e;
}

#endif /* list_remove_h */
