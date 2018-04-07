//
//  Quadlist_insertAfterAbove.h
//  Lexicon
//
//  Created by hantianbao on 2017/10/14.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Quadlist_insertAfterAbove_h
#define Quadlist_insertAfterAbove_h

template <typename T> QlistNodePosi(T)
Quadlist<T>::insertAfterAbove(T const& e, QlistNodePosi(T) p, QlistNodePosi(T) b = NULL)
{ _size++; return p->insertAsSuccAbove(e, b); }

#endif /* Quadlist_insertAfterAbove_h */
