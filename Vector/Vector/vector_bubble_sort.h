//
//  vector_bubble_sort.h
//  Vector
//
//  Created by hantianbao on 2016/12/31.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_bubble_sort_h
#define vector_bubble_sort_h

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi)
{ while(!bubble(lo, hi--)); }

template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi){
    bool sorted = true;
    while(++lo < hi)
        if(_elem[lo - 1] > _elem[lo]){
            sorted = false;
            swap(_elem[lo-1], _elem[lo]);
        }
}

#endif /* vector_bubble_sort_h */
