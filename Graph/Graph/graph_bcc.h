//
//  graph_bcc.h
//  Graph
//
//  Created by hantianbao on 2017/10/4.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef graph_bcc_h
#define graph_bcc_h

template <typename Tv, typename Te> void Graph<Tv, Te>::bcc(int s){
    reset(); int clock = 0; int v = s; Stack<int> S;
    do {
        if( UNDISCOVERED == status(v) ){
            BCC(v, clock, S);
            S.pop();
        }
    } while (s != (v = (++v % n)));
}

#define hca(x) (fTime(x))

template<typename Tv, typename Te>
void Graph<Tv, Te>::BCC(int v, int& clock, Stack<int>& S){
    hca(v) = dTime(v) = ++clock; status(v) = DISCOVERED; S.push(v);
    for(int u = firstNbr(v); -1 < u; u = nextNbr(v, u))
        switch(status(u)){
            case UNDISCOVERED:
                parent(u) = v; type(v, u) = TREE; BCC(u, clock; S);
                if(hca(u) < dTime(v))
                    hca(v) = min(hca(v), hca(u));
                else{
                    while(v != S.pop());
                    S.push(v);
                }
                break;
            case DISCOVERED:
                type(v, u) = BACKWARD;
                if(u != parent(v)) hca(v) = min(hca(v), dTime(u));
                break;
            default:
                type(v, u) = (dTime(v) < dTime(u)) ? FORWARD : CROSS;
                break;
        }
    status(v) = VISITED;
}

#endif /* graph_bcc_h */
