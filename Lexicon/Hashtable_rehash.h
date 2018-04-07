//
//  Hashtable_rehash.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_rehash_h
#define Hashtable_rehash_h

template <typename K, typename V> void Hashtable<K, V>::rehash(){
    int old_capacity = M; Entry<K, V>** old_ht = ht;
    M = primeNLT(2*M, 1048576, "../../_intput/prime-1048576-bitmap.txt");
    N = 0; ht = new Entry<K, V>*[M]; memset(ht, 0, sizeof(Entry<K, V>*)*M);
    release(lazyRemoval); lazyRemoval = new Bitmap(M);
    for(int i = 0; i < old_capacity; i++)
        if(old_ht[i])
            put(old_hit[i]->key, old_ht[i]->value);
    release(old_ht);
}

#endif /* Hashtable_rehash_h */
