//
//  binNode.h
//  binTree
//
//  Created by hantianbao on 2017/1/10.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binNode_h
#define binNode_h

#define BinNodePosi(T) BinNode<T>*
#define stature(p) ( (p) ? (p)->height : -1 )
typedef enum { RB_RED, RB_BLACK } RBColor;

template <typename T> struct BinNode{
    
    T data;
    BinNodePosi(T) parent; BinNodePosi(T) lc; BinNodePosi(T) rc;
    int height;
    int npl;//Null Path Length(左式堆，也可直接用height代替）
    RBColor color;
    
    BinNode() :
    parent(NULL), lc(NULL), rc(NULL), height(0), npl(1), color(RB_RED) {}
    BinNode(T e, BinNodePosi(T) p = NULL, BinNodePosi(T) lc = NULL, BinNodePosi(T) rc = NULL,
              int h = 0, int l = 1, RBColor c = RB_RED) :
    data(e), parent(p), lc(lc), rc(rc), height(h), npl(l), color(c) {}
    
    int size();
    BinNodePosi(T) insertAsLC(T const& e);
    BinNodePosi(T) insertAsRC(T const& e);
    BinNodePosi(T) succ();
    template <typename VST> void travLevel(VST&);
    template <typename VST> void travPre(VST&);
    template <typename VST> void travIn(VST&);
    template <typename VST> void travPost(VST&);
    
    bool operator< (BinNode const& bn) { return data < bn.data; }
    bool operator== (BinNode const& bn) { return data == bn.data; }
};

#include "BinNode_implementation.h"

#endif /* binNode_h */
