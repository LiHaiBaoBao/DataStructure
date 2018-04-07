//
//  vector_search.h
//  Vector
//
//  Created by hantianbao on 2016/12/29.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_search_h
#define vector_search_h

#include "bin_search_A.h"
#include "fib_search.h"

template <typename T>
Rank Vector<T>::search(T const& e, Rank lo, Rank hi) const{
    return (rand() % 2) ?
    binSearch(_elem, e, lo, hi) : fibSearch(_elem, e, lo, hi);
}

#endif /* vector_search_h */
