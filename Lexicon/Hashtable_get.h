//
//  Hashtable_get.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_get_h
#define Hashtable_get_h

template <typename K, typename V> V* Hashtable<K, V>::get(K k)
{ int r = probe4Hit(k); return ht[r] ? &(ht[r]->value) : NULL; }

template <typename K, typename V> int Hashtable<K, V>::probe4Hit(const K& k){
    int r = hashCode(k) % M;
    while( (ht[r] && (k!= ht[r]->key)) || (!ht[r] && lazilyRemoved(r)) )
        r = (r + 1) % M;
    return r;
}
#endif /* Hashtable_get_h */
