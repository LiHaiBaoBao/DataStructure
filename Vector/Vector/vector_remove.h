//
//  vector_remove.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_remove_h
#define vector_remove_h

template <typename T> int Vector<T>::remove(Rank lo, Rank hi){
    if(lo == hi) return 0;
    while(hi < _size) _elem[lo++] = _elem[hi++];
    _size = lo;
    shrink();
    return hi - lo;
}

template <typename T> T Vector<T>::remove(Rank r){
    T e = _elem[r];
    remove(r, r+1);
    return e;
}

#endif /* vector_remove_h */
