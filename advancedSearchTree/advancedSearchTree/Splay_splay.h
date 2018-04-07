//
//  Splay_splay.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/23.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_splay_h
#define Splay_splay_h

template <typename NodePosi> inline
void attachAsLChild( NodePosi p, NodePosi lc ) { p->lc = lc; if(lc) lc->parent = p; }

template <typename NodePosi> inline
void attachAsRChild( NodePosi p, NodePosi rc ) { p->rc = rc; if(rc) rc->parent = p; }

template <typename T>
BinNodePosi(T) Splay<T>::splay(BinNodePosi(T) v){
    if(!v) return NULL; BinNodePosi(T) p; BinNodePosi(T) g;
    while( (p = v->parent) && (g = p->parent) ){
        BinNodePosi(T) gg = g->parent;
        if(IsLChild(*v))
            if(IsLChild(*p)){//zig-zig
                attachAsLChild(g, p->rc); attachAsLChild(p, v->rc);
                attachAsRChild(p, g);     attachAsRChild(v, p);
            }else{//zig-zag
                attachAsLChild(p, v->rc); attachAsRChild(g, v->lc);
                attachAsLChild(v, g);     attachAsRChile(v, p);
            }
        else if(IsRChild(*p)){//zag-zag
            attachAsRChild(g, p->lc); attachAsLChild(g, v->rc);
            attachAsLChild(p, g); attachAsLChild(v, p);
        }else{//zag-zig
            attachAsRChild(p, v->lc); attachAsLChild(g, v->rc);
            attachAsRChild(v, g); attachAsLChild(v, p);
        }
        
        if(!gg) v->parent = NULL;
        else
            (g == g->lc) ? attachAsLChild(gg, v) : attachAsRChild(gg, v);
        updateHeight(g); updateHeight(p); updateHeight(v);
    }
    if(p = v->parent){
        if(IsLChild(*v)) { attachAsLChild(p, v->rc); attachAsRChild(v, p); }
        else             { attachAsRChild(p, v->lc); attachAsLChild(v, p); }
        updateHeight(p); updateHeight(v);
    }
    v->parent = NULL; return v;
}

#endif /* Splay_splay_h */
