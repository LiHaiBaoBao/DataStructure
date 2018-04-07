//
//  Quadlist_remove.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Quadlist_remove_h
#define Quadlist_remove_h

template <typename T>
T Quadlist<T>::remove(QlistNodePosi(T) p) {
    p->pred->succ = p->succ; p->succ->pred = p->pred; _size--;
    T e = p->entry; delete p;
    return e;
}

template <typename T> int Quadlist<T>::clear(){
    int oldSize = _size;
    while(0 < _size) remove(header->succ);
    return oldSize;
}

#endif /* Quadlist_remove_h */
