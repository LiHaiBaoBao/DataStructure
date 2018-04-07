//
//  Skiplist_skipSearch.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Skiplist_skipSearch_h
#define Skiplist_skipSearch_h

template <typename K, typename V> bool Skiplist<K, V>::skipSearch(
    ListNode<Quadlist<Entry<K, V>>*>* &qlist,
    QuadlistNode<Entry<K, V>>* &p,
    K& k){
    while(true){
        while( p->succ && (p->entry.key) <= k)
            p = p->succ;
        p = p->pred;
        if(p->pred && (k == p->entry.key)) return true;
        qlist = qlist->succ;
        if(!qlist->succ) return false;
        p = (p->pred) ? p->below : qlist->data->first();
    }

#endif /* Skiplist_skipSearch_h */
