//
//  list_deduplicate.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_deduplicate_h
#define list_deduplicate_h

template <typename T> int List<T>::deduplicate(){
    if(_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = header; Rank r = 0;
    while(trailer != (p = p->succ)){
        ListNodePosi(T) q = find(p->data, r, p);
        q ? remove(q) : r++;
    }
    return oldSize - _size;
}

#endif /* list_deduplicate_h */
