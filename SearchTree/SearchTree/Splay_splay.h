//
//  Splay_splay.h
//  SearchTree
//
//  Created by hantianbao on 2017/10/7.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Splay_splay_h
#define Splay_splay_h

template <typename NodePosi> inline
void attachAsLChild(NodePosi p, NodePosi lc) { p->lc = lc; if(lc) lc->parent = p; }

template <typename NodePosi> inline
void attachAsRChild(NodePosi p, NodePosi rc) { p->rc = rc; if(rc) rc->parent = p; }

template <typename T>
BinNodePosi(T) Splay<T>::splay(BinNodePosi(T) v){
    if(!v) return NULL; BinNodePosi(T) p; BinNodePosi(T) g;
    while( (p = v->parent) && (g = p->parent) ){
        BinNodePosi(T) gg = g->parent;
        if(IsLChild(*v))
            if(IsLChild(*p)){
                attachAsLChild(g, p->rc); attachAsLChild(p, v->rc);
                attachAsRChild(p, g); attachAsRChild(v, p);
            }else{
                attachAsLChild(p, v->rc); attachAsRChild(g, v->lc);
                attachAsLChild(v, g); attachAsRChild(v, p);
            }
        else if(IsRChild(*p)){
            attachAsRChild(g, p->lc); attachAsRChild(p, v->lc);
            attachAsLChild(p, g); attachAsLChild(v, p);
        }else{
            attachAsRChild(p, v->lc); attachAsLChild(g, v->rc);
            attachAsRChild(v, g); attachAsLChild(v, p);
        }
        
        if(!gg) v->parent = NULL;
        else
            (g == gg->lc) ? attachAsLChild(gg, v) : attachAsRChild(gg, v);
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
