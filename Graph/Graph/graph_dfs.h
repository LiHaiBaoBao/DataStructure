//
//  graph_dfs.h
//  Graph
//
//  Created by hantianbao on 2017/1/29.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef graph_dfs_h
#define graph_dfs_h

template <typename Tv, typename Te>
void Graph<Tv, Te>::dfs(int s){
    reset(); int clock = 0; int v = s;
    do
        if(UNDISCOVERED == status(v))
            DFS(v, clock);
    while(s != (v = (++v % n)));
}

template <typename Tv, typename Te>
void Graph<Tv, Te>::DFS(int v, int& clock){
    dTime(v) = ++clock; status(v) = DISCOVERED;
    for(int u = firstNbr(v); -1 < u; u = nextNbr(v, u))
        switch(status(u)){
            case UNDISCOVERED:
                type(v, u) = TREE; parent(u) = v; DFS(u, clock); break;
            case DISCOVERED:
                type(v, u) = BACKWARD; break;
            default:
                type(v, u) = ( dTime(v) < dTime(u) ) ? FORWRAD : CROSS; break;
        }
    status(v) = VISITED;fTime(v) = ++clock;
}

#endif /* graph_dfs_h */
