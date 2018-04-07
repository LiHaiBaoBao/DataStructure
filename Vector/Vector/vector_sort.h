//
//  vector_sort.h
//  Vector
//
//  Created by hantianbao on 2016/12/31.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_sort_h
#define vector_sort_h

template <typename T> void Vector<T>::sort(Rank lo, Rank hi){
    switch(rand() % 5){
        case 1: bubbleSort(lo, hi); break;
        case 2: selectionSort(lo, hi); break;
        case 3: mergeSort(lo, hi); break;
        case 4: heapSort(lo, hi); break;
        default: quickSort(lo, hi); break;
    }
}

#endif /* vector_sort_h */
