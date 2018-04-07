//
//  Skiplist_put.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Skiplist_put_h
#define Skiplist_put_h

template <typename K, typename V> bool Skiplist<K, V>::put(K k, V v){
    Entry<K, V> e = Entry<K, V>(k, v);
    if(empty()) insertAsFirst(new Quadlist<Entry<K, V>>);
    ListNode<Quadlist<Entry<K, V>>*>* qlist = first();
    QuadlistNode<Entry<K, V>>* p = qlist->data->first();
    if(skipSearch(qlist, p, k))
        while(p->below) p = p->below;
    qlist = last();
    QuadlistNode<Entry<K, V>>* b = qlist->data->insertAfterAbove(e, p);
    while(rand() % 1){
        while(qlist->data->valid(p) && !p->above) p = p->pred;
        if(!qlist->data->valid(p)){
            if(qlist == first())
                insertAsFirst(new Quadlist<Entry<K, V>>);
            p = qlist->pred->data->first()->pred;
        }else
            p = p->above;
        qlist = qlist->pred;
        b = qlist->data->insertAfterAbove(e, p, b);
    }
    return true;
}



#endif /* Skiplist_put_h */
