//
//  vector_merge_sort.h
//  Vector
//
//  Created by hantianbao on 2016/12/31.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_merge_sort_h
#define vector_merge_sort_h

template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi){
    if(hi - lo < 2) return;
    int mi = (lo + hi) >> 1; mergeSort(lo, mi); mergeSort(mi, hi);
    merge(lo, mi, hi);
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi){
    T* A = _elem + lo;
    int lb = mi -lo; T* B = new T[lb];
    for(Rank i = 0; i < lb; i++) B[i] = A[i];
    int lc = hi - mi; T* C = _elem + mi;
    for(Rank i = 0, j = 0, k = 0; j < lb || k < lc; ){
        if( (j < lb) && ( !(k < lc) || (B[j] <= C[k]) ) ) A[i++] = B[j++];
        if( (k < lc) && ( !(j < lb) || (B[j] > C[k]) ) ) A[i++] = C[k++];
    }
    delete [] B;
}

#endif /* vector_merge_sort_h */
