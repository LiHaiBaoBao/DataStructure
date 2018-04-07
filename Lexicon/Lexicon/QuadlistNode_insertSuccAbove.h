//
//  QuadlistNode_insertSuccAbove.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef QuadlistNode_insertSuccAbove_h
#define QuadlistNode_insertSuccAbove_h

template <typename T> QlistNodePosi(T)
QuadlistNode<T>::insertAsSuccAbove(T const& e, QlistNodePosi(T) b = NULL){
    QlistNodePosi(T) x = new QuadlistNode<T>(e, this, succ, NULL, b);
    succ->pred = x; succ = x;
    if(b) b->above = x;
    return x;
}

#endif /* QuadlistNode_insertSuccAbove_h */
