//
//  digit_convert.cpp
//  Stack
//
//  Created by hantianbao on 2017/1/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include "Stack.h"
#include <stdio.h>

void convert_recursion(Stack<char>& S, __int64_t n, int base){
    static char digit[]
    = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    if(0 < n){
        convert_recursion(S, n/base, base);
        S.push(digit[n % base]);
    }
}

void conver_iteration(Stack<char>& S, __int64_t n, int base){
    static char digit[]
    = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while(n > 0){
        int remainder = (int)(n % base); S.push(digit[remainder]);
        n /= base;
    }
}


