//
//  vector_copy.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_copy_h
#define vector_copy_h

template <typename T>
void Vector<T>::copyFrom(T const* A, Rank lo, Rank hi){
    _elem = new T[_capacity = 2 * (hi - lo)]; _size = 0;
    while(lo < hi)
        _elem[_size++] = A[lo++];
}

template <typename T> Vector<T>& Vector<T>::operator= (Vector<T> const& V){
    if (_elem) delete[] _elem;
    copyFrom(V._elem, 0, V._size);
    return *this;
}

#endif /* vector_copy_h */
