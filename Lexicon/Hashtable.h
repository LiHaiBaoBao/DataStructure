//
//  Hashtable.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

#include "../Lexicon/Dictionary.h"
#include "../Bitmap/Bitmap.h"

template <typename K, typename V>
class HashTable : public Dictionary<K, V>{
private:
    Entry<K, V>** ht;
    int M;//桶数组容量
    int N;//此条数量
    Bitmap* lazyRemoval;
#define lazilyRemoved(x) (lazyRemoval->test(x))
#define markAsRemoved(x) (lazyRemoval->set(x))
protected:
    int probe4Hit(const K& k);
    int probe4Free(const K& k);
    void rehash();
public:
    Hashtable(int c = 5);
    ~Hashtable();
    int size() const { return N; }
    bool put(K, V);
    V* get(K k);
    bool remove(K k);
}

#endif /* Hashtable_h */
