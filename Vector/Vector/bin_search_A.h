//
//  bin_search_A.h
//  Vector
//
//  Created by hantianbao on 2016/12/29.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef bin_search_A_h
#define bin_search_A_h

template <typename T> static Rank binSearch(T* A, T const& e, Rank lo, Rank hi){
    while(lo < hi){
        Rank mi = (lo + hi) >> 1;
        if(e < A[mi]) hi = mi;
        else if(A[mi] < e) lo = mi + 1;
        else return mi;
    }
    return -1;
}

#endif /* bin_search_A_h */
