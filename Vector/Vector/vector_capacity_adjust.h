//
//  vector_capacity_adjust.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_capacity_adjust_h
#define vector_capacity_adjust_h

template <typename T> void Vector<T>::expand(){
    if(_size < _capacity) return;
    if(_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T* oldElem = _elem; _elem = new T[_capacity <<= 1];
    for(int i = 0; i < _size; i++)
        _elem[i] = oldElem[i];
    delete [] oldElem;
}

template <typename T> void Vector<T>::shrink(){
    if(_capacity < DEFAULT_CAPACITY << 1) return;
    if(_size << 2 > _capacity) return;
    T* oldElem = _elem; _elem = new T[_capacity >>= 1];
    for(int i = 0; i < _size; i++) _elem[i] = oldElem[i];
    delete [] oldElem;
}

#endif /* vector_capacity_adjust_h */
