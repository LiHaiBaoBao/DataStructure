//
//  vector_find.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_find_h
#define vector_find_h

template <typename T>
Rank Vector<T>::find(T const& e, Rank lo, Rank hi) const{
    while((lo < hi--) && e != _elem[hi]);
    return hi;
}

#endif /* vector_find_h */
