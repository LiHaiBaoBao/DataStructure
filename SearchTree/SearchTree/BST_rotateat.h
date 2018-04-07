//
//  BST_rotateat.h
//  SearchTree
//
//  Created by hantianbao on 2017/12/21.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BST_rotateat_h
#define BST_rotateat_h

template <typename T> BinNodePosi(T) BST<T>::rotateAt(BinNodePosi(T) v){
    BinNodePosi(T) p = v->parent; BinNodePosi(T) g = p->parent;
    if(IsLChild(*p)) /*zig*/
        if(IsLChild(*v)){/*zig-zig*/
            p->parent = g->parent;
            return connect34(v, p, g, v->lc, v->rc, p->rc, g->rc);
        }else{/*zig-zag*/
            v->parent = g->parent;
            return connect34(p, v, g, p->lc, v->lc, v->rc, g->rc);
        }
    else/*zag*/
        if(IsRChild(*v)){/*zag-zag*/
            p->parent = g->parent;
            return connect34(g, p, v, g->lc, p->lc, v->lc, v->rc);
        }else{/*zag-zig*/
            v->parent = g->parent;
            return connect34(g, v, p, g->lc, v->lc, v->rc, p->rc);
        }
}

#endif /* BST_rotateat_h */
