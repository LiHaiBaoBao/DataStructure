//
//  binnode_insert.h
//  binTree
//
//  Created by hantianbao on 2017/1/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_insert_h
#define binnode_insert_h

template <typename T> BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)
{ return lc = new BinNode(e, this); }

template <typename T> BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)
{ return rc = new BinNode(e, this); }

#endif /* binnode_insert_h */
