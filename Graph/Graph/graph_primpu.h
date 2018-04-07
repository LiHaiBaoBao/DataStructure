//
//  graph_primpu.h
//  Graph
//
//  Created by hantianbao on 2017/10/5.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef graph_primpu_h
#define graph_primpu_h

template <typename Tv, typename Te> struct PrimPU{
    virtual void operator()(Graph<Tv, Te>* g, int uk, int v){
        if(UNDISCOVERED == g->status(v))
            if(g->priority(v) > g->weight(uk, v)){
                g->priority(v) = g->weight(uk, v);
                g->parent(v) = uk;
            }
    }
}

#endif /* graph_primpu_h */
