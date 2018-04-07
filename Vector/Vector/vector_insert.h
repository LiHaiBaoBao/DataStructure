//
//  vector_insert.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_insert_h
#define vector_insert_h

template <typename T>
Rank Vector<T>::insert(Rank r, T const& e){
    expand();
    for(int i = _size; i > r; i--) _elem[i] = _elem[i-1];
    _elem[r] = e; _size++;
    return r;
}

#endif /* vector_insert_h */
