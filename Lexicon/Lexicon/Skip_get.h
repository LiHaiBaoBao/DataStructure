//
//  Skip_get.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Skip_get_h
#define Skip_get_h

template <typename K, typename V> V* Skiplist<K, V>::get(K k){
    if(empty()) return NULL;
    ListNode<Quadlist<Entry<K,V>*>* qlist = first();
    QuadlistNode<Entry<K, V>>* p = qlist->data->first();
    return skipSearch(qlist, p, k) ? &(p->entry.value) : NULL;
}

#endif /* Skip_get_h */
