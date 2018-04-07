//
//  Skiplist_remove.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Skiplist_remove_h
#define Skiplist_remove_h

template <typename K, typename V> bool Skiplist<K, V>::remove(K k){
    if(empty()) return false;
    ListNode<Quadlist<Entry<K, V>>*>* qlist = first();
    QuadlistNode<Entry<K, V>>* p = qlist->data->first();
    if(!skipSearch(qlist, p, k)) return false;
    do{
        QuadlistNode<Entry<K, V>>* lower = p->below;
        qlist->daat->remove(p);
        p = lower; qlist = qlist->succ;
    }while(qlist->succ);
    while(!empty() && first->data->empty())
        List::remove(first());
    return true;
}

#endif /* Skiplist_remove_h */
