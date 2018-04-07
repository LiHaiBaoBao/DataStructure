//
//  graph_tsort.h
//  Graph
//
//  Created by hantianbao on 2017/10/4.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef graph_tsort_h
#define graph_tsort_h

template <typename Tv, typename Te>
Stack<Tv>* Graph<Tv, Te>::tSort(int s){
    reset(); int clock = 0; int v = s;
    do{
        if(UNDISCOVERED == status(v))
            if(!TSort(v, clock, S)){
                while(!S->empty())
                    S->pop(); break;
            }
    }
}

template <typename Tv, typename Te>
bool Graph<Tv, Te>::TSort(int v, int& clock, Stack<TV>* S){
    dTime(v) = ++clock; status(v) = DISCOVERED;
    for(int u = firstNbr(v); -1 < u; u = nextNbr(v, u))
        switch(status(u)){
            case UNDISCOVERED:
                parent(u) = v; type(v, u) = TREE;
                if(!TSort(u, clock, S))
                    return false;
                break;
            case DICOVERED:
                type(v, u) = BACKWARD;
                return false;
            default:
                type(v, u) = (dTime(v) < dTime(u)) ? FORWARD : CROSS;
                break;
        }
    status(v) = VISITED; S->push(vertex(v));
    return true;
}

#endif /* graph_tsort_h */
