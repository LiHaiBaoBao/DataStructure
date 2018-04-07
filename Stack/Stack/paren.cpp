//
//  paren.cpp
//  Stack
//
//  Created by hantianbao on 2017/1/6.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"

void trim(const char exp[], int& lo, int& hi){
    while( (lo<=hi) && (exp[lo]!='(') && (exp[lo]!=')') ) lo++;
    while( (lo<=hi) && (exp[hi]!='(') && (exp[hi]!=')') ) hi--;
}

int divide(const char exp[], int lo, int hi){
    int mi = lo; int crc = 1;
    while( (0 < crc) && (++mi < hi) )
    { if(exp[mi] == ')') crc--; if(exp[mi]=='(') crc++; }
    return mi;
}

bool paren(const char exp[], int lo, int hi){
    trim(exp, lo, hi); if(lo > hi) return true;
    if(exp[lo] != '(') return false;
    if(exp[hi] != ')') return false;
    int mi = divide(exp, lo, hi);
    if(mi > hi) return false;
    return paren(exp, lo+1, mi-1) && paren(exp, mi+1, hi);
}

bool paren_update(const char exp[], int lo, int hi){
    Stack<char> S;
    int i;
    for(i = lo; i <= hi; i++){
        switch(exp[i]){
            case'(': case'[': case'{': S.push(exp[i]); break;
            case')': if( (S.empty()) || ('('!=S.pop()) ) return false; break;
            case']':if( (S.empty()) || ('['!=S.pop()) ) return false; break;
            case'}':if( (S.empty()) || ('{'!=S.pop()) ) return false; break;
            default: break;
        }
    }
    return S.empty();
}
