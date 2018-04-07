//
//  bintree_insert.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef bintree_insert_h
#define bintree_insert_h

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRoot(T const& e)
{ _size = 1; return _root = new BinNode<T> (e); }

template <typename T> BinNodePosi(T) BinTree<T>::insertAsLC(BinNodePosi(T) x, T const& e)
{ _size++; x->insertAsLC(e); updateHeightAbove(x); return x->lc; }

template <typename T> BinNodePosi(T) BinTree<T>::insertAsRC(BinNodePosi(T) x, T const& e)
{ _size++; x->insertAsRC(e); updateHeightAbove(x); return x->rc; }

#endif /* bintree_insert_h */
