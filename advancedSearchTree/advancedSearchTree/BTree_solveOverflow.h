//
//  BTree_solveOverflow.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef BTree_solveOverflow_h
#define BTree_solveOverflow_h

template <typename T> //关键码插入后若节点上溢，则做节点分裂处理
void BTree<T>::solveOverflow(BTNodePosi(T) v){
    if(_order >= v->child.size()) return; //递归基：当前节点未发生上溢
    Rank s = _order / 2; //轴点（此时应有_order=key.size()=child.size()-1)
    BTNodePosi(T) u = new BTNode<T> (); //新节点已有一个空孩子
    for(Rank j = 0; j < _order - s - 1; j++){ //v右侧_order-s-1个孩子及关键码分裂为右侧节点u
        u->child.insert(j, v->child.remove(s+1));
        u->key.insert(j, v->key.remove(s+1));
    }
    u->child[_order - s - 1] = v->child.remove(s + 1); //移动v最靠右的孩子
    if( u->child[0] )
        for(Rank j = 0; j < _order - s; j++)
            u->child[j]->parent = u;
    BTNodePosi(T) p = v->parent;
    if(!p) { _root = p = new BTNode<T>(); p->child[0] = v; v->parent = p; }
    Rank r = 1 + p->key.search(v->key[0]);
    p->key.insert(r, v->key.remove(s));
    p->child.insert(r+1, u); u->parent = p;
    solveOverflow(p);
}

#endif /* BTree_solveOverflow_h */
