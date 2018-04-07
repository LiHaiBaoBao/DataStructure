//
//  binnode_trav_in.h
//  binTree
//
//  Created by hantianbao on 2017/1/13.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_trav_in_h
#define binnode_trav_in_h

template <typename T, typename VST>
void travIn_R(BinNodePosi(T) x, VST& visit){
    if(!x) return;
    travIn_R(x->lc, visit);
    visit(x->data);
    travIn_R(x->rc, visit);
}

template <typename T>
static void goAlongLeftBranch(BinNodePosi(T) x, Stack<BinNodePosi(T)& S){
    while(x) { S.push(x); x = x->lc; }
}

template <typename T>
void travIn_I1(BinNodePosi(T) x, VST& visit){
    Stack<BinNodePosi(T)> S;
    while(true){
        goAlongLeftBranch(x, S);
        if(S.empty()) break;
        x = S.pop(); visit(x->data);
        x = x->rc;
    }
}

template <typename T, typename VST>
void travIn_I2(BinNodePosi(T) x, VST& visit){
    Stack<BinNodePosi(T)> S;
    while(true)
        if(x){
            S.push(x);
            x = x-lc;
        }else if(!S.empty){
            x = S.pop();
            visit(x->data);
            x = x->rc;
        }else
            break;
}

template <typename T, typename VST>
void travIn_I3(BinNodePosi(T) x, VST& visit){
    bool backtrack = false;
    while(true)
        if(!backtrack && HasLChild(*x))
            x = x->lc;
        else{
            visit(x->data);
            if(HasRChild(*x)){
                x = x->rc;
                backtrack = false;
            }else{
                if(!(x=x->succ())) break;
                backtrack = true;
            }
        }
}

#endif /* binnode_trav_in_h */
