//
//  fib_search.h
//  Vector
//
//  Created by hantianbao on 2016/12/30.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef fib_search_h
#define fib_search_h

#include "../fibonacci/Fib.h"

template <typename T> static Rank fibSearch(T* A, T const& e, Rank lo, Rank hi){
    Fib fib(hi - lo);
    while(lo < hi){
        while(hi - lo < fib.get()) fib.prev();
        Rank mi = lo + fib.get() - 1;
        if(e < A[mi]) hi = mi;
        else if(A[mi] < e) lo = mi + 1;
        else return mi;
    }
    return -1;
}

#endif /* fib_search_h */
