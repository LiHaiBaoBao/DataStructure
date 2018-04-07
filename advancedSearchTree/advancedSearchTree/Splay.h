//
//  Splay.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/23.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_h
#define Splay_h

#include "../../BST/BST.h"

template <typename T> class Splay : public BST <T> {
protected:
    BinNodePosi(T) Splay( BinNodePosi(T) v );
public:
    BinNodePosi(T) Search( const T& e );
    BinNodePosi(T) insert( const T& e );
    bool remove( const T& e );
}

#include "Splay_implementation.h"

#endif /* Splay_h */
