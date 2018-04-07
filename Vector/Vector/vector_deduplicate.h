//
//  vector_deduplicate.h
//  Vector
//
//  Created by hantianbao on 2016/12/27.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_deduplicate_h
#define vector_deduplicate_h

template <typename T> int Vector<T>::deduplicate(){
    int oldSize = _size;
    Rank i = 1;
    while(i < _size)
        (find(_elem[i], 0, i) < 0) ?
        i++ : remove(i);
    return oldSize - _size;
}

#endif /* vector_deduplicate_h */
