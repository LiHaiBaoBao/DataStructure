//
//  Hashtable_remove.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_remove_h
#define Hashtable_remove_h

template <typename K, typename V> bool Hashtable<K, V>::remove(K k){
    int r = probe4Hit(k); if(!ht[r]) return false;
    release(ht[r]); ht[r] = NULL; markAsRemoved(r); N--; return true;
}

#endif /* Hashtable_remove_h */
