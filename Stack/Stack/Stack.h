//
//  Stack.h
//  Stack
//
//  Created by hantianbao on 2017/1/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "../../Vector/Vector/Vector.h"

template <typename T> class Stack : public Vector<T>{
public:
    void push(T const& e) { this->insert(this->size(), e); }
    T pop() { return this->remove( this->size()-1 ); }
    T& top() { return (*this)[this->size()-1]; }
};

#endif /* Stack_h */
