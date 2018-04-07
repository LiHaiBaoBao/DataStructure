//
//  Hashtable_put.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_put_h
#define Hashtable_put_h

template <typename K, typename V> bool Hashtable<K, V>::put<K k, V v>{
    if(ht[probe4hit(k)]) return false;
    int r = probe4Free(k);
    ht[r] = new Entry<K, V>(k, v); ++N;
    if(N * 2 > M) rehash();
    return true;
}

template <typename K, typename V> int Hashtable<K, V>::probe4Free(const K& k){
    int r = hashCode(k) % M;
    while(ht[r]) r = (r + 1) % M;
    return r;
}

#endif /* Hashtable_put_h */
