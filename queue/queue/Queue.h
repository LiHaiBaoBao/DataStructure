//
//  Queue.h
//  queue
//
//  Created by hantianbao on 2017/8/9.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "../../List/List/List.h"

template <typename T> class Queue : public List<T>
{
public:
    void enqueue(T const& e) { insetAsLast(e); }
    T dequeue() { return remove(this->first()); }
    T& front() { return this->first()->data; }
};

#endif /* Queue_h */
