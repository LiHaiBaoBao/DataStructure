//
//  Hashtable_destructor.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_destructor_h
#define Hashtable_destructor_h

template <typename K, typename V> Hashtable<K, V>::~Hashtable(){
    for(int i = 0; i < M; i++)
        if(ht[i]) release(ht[i]);
    release(ht);
    release(lazyRemoval);
}

#endif /* Hashtable_destructor_h */
