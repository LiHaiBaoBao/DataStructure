//
//  Quadlist_init.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Quadlist_init_h
#define Quadlist_init_h

template <typename T> void Quadlist<T>:init(){
    header = new QuadlistNode<T>;
    trailer = new QuadlistNode<T>;
    header->succ = trailer; header->pred = NULL;
    trailer->pred = header; trailer->succ = NULL;
    header->above = trailer->above = NULL;
    header->below = trailer->below = NULL;
    _size = 0;
}

#endif /* Quadlist_init_h */
