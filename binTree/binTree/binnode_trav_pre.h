//
//  binnode_travpre_r.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_travpre_r_h
#define binnode_travpre_r_h

template <typename T, typename VST>
void travPre_R(BinNodePosi(T) x, VST& visit){
    if(!x) return;
    visit(x->data);
    travPre_R(x->lc, visit);
    travPre_R(x->rc, visit);
}

template <typename T, typename VST>
static void visitAlongLeftBranch(BinNodePosi(T) x, VST& visit, Stack<BinNodePosi(T)>& S){
    while(x){
        visit(x->data);
        S.push(x->rc);
        x = x->lc;
    }
}

template <typename T, typename VST>
void travPre_I2(BinNodePosi(T) x, VST& visit){
    Stack<BinNodePosi(T)> S;
    while(true){
        visitAlongLeftBranch(x, visit, S);
        if(S.empty()) break;
        x = S.pop();
    }
}

#endif /* binnode_travpre_r_h */
