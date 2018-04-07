//
//  vector_disorder.h
//  Vector
//
//  Created by hantianbao on 2016/12/27.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_disorder_h
#define vector_disorder_h

template <typename T> int Vector<T>::disordered() const{
    int n = 0;
    for(int i = 1; i < _size; i++)
        if(_elem[i-1] > _elem[i]) n++;
    return n;
}

#endif /* vector_disorder_h */
