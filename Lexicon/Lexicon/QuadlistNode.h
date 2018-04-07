//
//  QuadlistNode.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef QuadlistNode_h
#define QuadlistNode_h

#include "../../SearchTree/Entry.h"
#define QlistNodePosi(T) QuadlistNode<T>*

template <typename T> struct QuadlistNode{
    T entry;
    QlistNodePosi(T) pred; QlistNodePosi(T) succ;
    QlistNodePosi(T) above; QlistNodePosi(T) below;
    QuadlistNode
    (T e = T(), QlistNodePosi(T) p = NULL, QlistNodePosi(T) s = NULL, QlistNodePosi(T) a = NULL, QlistNodePosi(T) b = NULL)
    : entry(e), pred(p), succ(s), above(a), below(b) { }
    QlistNodePosi(T) insertAsSuccAbove
    (T const e, QlistNodePosi(T) b = NULL);
}

#endif /* QuadlistNode_h */
