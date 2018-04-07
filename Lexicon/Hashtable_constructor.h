//
//  Hashtable_constructor.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_constructor_h
#define Hashtable_constructor_h

template <typename K, typename V> Hashtable<K, V>::Hashtable(int c){
    M = primeNLT(c, 1048576, "../../_input/prime-1048576-bitmap.txt");
    N = 0; ht = new Entry<K, V>*[M];
    memset(ht, 0, sizeof(Entry<K, V>*) *M);
    lazyRemoval = new Bitmap(M);
}

int primeNLT(int c, int n, char* file){
    Bitmap B(file, n);
    while(c < n)
        if(B.test(c)) c++;
        else return c;
    return c;
}

#endif /* Hashtable_constructor_h */
