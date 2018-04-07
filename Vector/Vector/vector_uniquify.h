//
//  vector_uniquify.h
//  Vector
//
//  Created by hantianbao on 2016/12/27.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_uniquify_h
#define vector_uniquify_h

/*
template <typename T> int Vector<T>::uniquify(){
    int oldSize = _size; int i = 1;
    while(i < _size)
        _elem[i-1] == _elem[i] ? remove(i) : i++;
    return oldSize - _size;
}
*/

template <typename T> int Vector<T>::uniquify(){
    Rank i = 0, j = 0;
    while(++j < _size)
        if(_elem[i] != _elem[j])
            _elem[++i] = _elem[j];
    _size = ++i; shrink();
    return j - i;
}


#endif /* vector_uniquify_h */
