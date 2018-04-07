//
//  binnode_macro_basic.h
//  binTree
//
//  Created by hantianbao on 2017/1/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_macro_basic_h
#define binnode_macro_basic_h

#define IsRoot(x) ( !(x).parent )
#define IsLChild(x) ( !IsRoot(x) && ( &(x) == (x).parent->lc ) )
#define IsRChild(x) ( !IsRoot(x) && ( &(x) == (x).parent->rc ) )
#define HasParent(x) ( !IsRoot(x) )
#define HasLChild(x) ( (x).lc )
#define HasRChild(x) ( (x).rc )
#define HasChild(x) ( HasLChild(x) || HasRChild(x) )
#define HasBothChild(x) ( HasLChild(x) && HasRChild(x) )
#define IsLeaf(x) ( !HasChild(x) )

#define sibling(p) /*兄弟*/ \
    ( IsLChild(*(p)) ? (p)->parent->rc : (p)->parent->lc )

#define uncle(x) \
    ( IsLChild( *((x)->parent) ) ? (x)->parent->parent->rc : (x)->parent->parent->lc )

#define FromParentTo(x) \
    ( IsRoot(x) ? _root : (IsLChild(x) ? (x).parent->lc : (x).parent->rc ) )

#endif /* binnode_macro_basic_h */
