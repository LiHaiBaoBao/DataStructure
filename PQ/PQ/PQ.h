//
//  PQ.h
//  PQ
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef PQ_h
#define PQ_h

template <typename T> struct PQ{
    virtual void insert(T) = 0;
    virtual T getMax() = 0;
    virtual T delMax() = 0;
}

#endif /* PQ_h */
