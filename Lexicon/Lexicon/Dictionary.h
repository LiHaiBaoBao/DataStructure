//
//  Dictionary.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Dictionary_h
#define Dictionary_h

template <typename K, typename V> struct Dictionary{
    virtual int size() const = 0;
    virtual bool put(K, V) = 0;
    virtual bool get(K k) = 0;
    virtual bool remove(K k) = 0;
}

#endif /* Dictionary_h */
