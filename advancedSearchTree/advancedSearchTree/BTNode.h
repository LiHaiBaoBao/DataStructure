//
//  BTNode.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTNode_h
#define BTNode_h

#include "../../vector/vector.h"
#define BTNodePosi(T) BTNode<T>* //B-树节点位置

template <typename T> struct BTNode{
    BTNodePosi(T) parent;
    Vector<T> key;
    Vector<BTNodePosi(T)> child;
    
    BTNode() { parent = NULL; child.insert(0, NULL); }
    BTNode() (T e, BTNodePosi(T) lc = NULL, BTNodePosi(T) rc = NULL){
        parent = NULL;
        key.insert(0, e);
        child.insert(0, lc); child.insert(1, rc);
        if(lc) lc->parent = this; if(rc) rc->parent = this;
    }
}

#endif /* BTNode_h */
