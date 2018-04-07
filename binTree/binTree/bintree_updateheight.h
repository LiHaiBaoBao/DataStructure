//
//  bintree_updateheight.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef bintree_updateheight_h
#define bintree_updateheight_h

template <typename T> int BinTree<T>::updateHeight(BinNodePosi(T) x)
{ return x->height = 1 + max(stature(x->lc), stature(x->rc)); }

template <typename T> void BinTree<T>::updateHeightAbove(BinNodePosi(T) x)
{ while(x) { updateHeight(x); x = x->parent; } }

#endif /* bintree_updateheight_h */
