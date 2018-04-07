//
//  Skiplist.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Skiplist_h
#define Skiplist_h

#include "../../List/List.h"
#include "../../SearchTree/Entry.h"
#include "Quadlist.h"
#include "Dictionary.h"

template <typename K, typename V>
class Skiplist : public Dictionary<K, V>, public List<Quadlist<Entry<K,V>>*>{
protected:
    bool skipSearch(
    ListNode<Quadlist<Entry<K, V>>*>* &qlist,
    QuadlistNode<Entry<K, V>>* &p,
    K& k);
public:
    int size() const { return empty() ? 0 : lase()->data->size(); }
    int level() { return List::size(); }
    bool put(K, V);
    v* get(K k);
    bool remove(K k);
}

#endif /* Skiplist_h */
