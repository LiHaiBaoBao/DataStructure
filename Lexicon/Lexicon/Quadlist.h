//
//  Quadlist.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Quadlist_h
#define Quadlist_h

#include "QuadlistNode.h"
template <typename T> class Quadlist{
private:
    int _size; QlistNodePosi(T) header; QlistNodePosi(T) trailer;
protected:
    void init();
    int clear();
public:
    Quadlist() { init(); }
    ~Quadlist() { clear(); delete header; delete trailer; }
    
    Rank size() const { return _size; }
    bool empty() const { return _size <= 0; }
    QlistNodePosi(T) first() const { return header->succ; }
    QlistNodePosi(T) last() const { return trailer->pred; }
    bool valid(QlistNodePosi(T) p)
    { return p && (trailer != p) (header != p); }
    
    T remove(QlistNodePosi(T) p);
    QlistNodePosi(T) insertAfterAbove(T const& e, QlistNodePosi(T) p, QlistNodePosi(T) b = NULL);
    
    void traverse(void(*) (T&));
    template <typename VST>
    void traverse(VST&);
}

#endif /* Quadlist_h */
