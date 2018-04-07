//
//  vector_unsort.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_unsort_h
#define vector_unsort_h

#include <stdlib.h>

template <typename T> void Vector<T>::unsort(Rank lo, Rank hi){
    T* V = _elem + lo;
    for(Rank i = hi - lo; i > 0; i--)
        swap(V[i -1], V[rand() % i]);
}

#endif /* vector_unsort_h */
