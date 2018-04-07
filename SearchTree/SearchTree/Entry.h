//
//  Entry.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/5.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Entry_h
#define Entry_h

template <typename K, typename V> struct Entry{
    K key; V value;
    Entry( K k = K(), V v = V() ) : key(k), value(v) {};
    Entry( Entry<K, V> const& e ) : key(e.key), value(e.value) {};
    bool operator < (Entry<K, V> const& e) { return key < e.key; }
    bool operator > (Entry<K, V> const& e) { return key > e.key; }
    bool operator == (Entry<K, V> const& e) { return key == e.key; }
    bool operator != (Entry<K, V> const& e) { return key != e.key; }
};

#endif /* Entry_h */
