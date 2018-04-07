//
//  list_uniquify.h
//  List
//
//  Created by hantianbao on 2017/1/3.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_uniquify_h
#define list_uniquify_h

template <typename T> int List<T>::uniquify(){
    if(_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = first(); ListNodePosi(T) q;
    while(trailer != (q = p->succ))
        if(p->data != q->data) p = q;
        else remove(q);
    return oldSize - _size;
}

#endif /* list_uniquify_h */
