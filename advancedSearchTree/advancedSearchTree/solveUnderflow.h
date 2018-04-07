//
//  solveUnderflow.h
//  advancedSearchTree
//
//  Created by hantianbao on 2017/12/24.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef solveUnderflow_h
#define solveUnderflow_h

template <typename T> //关键码删除后若有节点下溢，则做节点旋转或合并处理
void BTree<T>::solveUnderflow(BTNodePosi(T) v){
    if((_oder + 1) / 2 <= v->child.size()) return;
    BTNodePosi(T) p = v->parent;
    if(!p) {
        if(!v->key.size() && v->child[0]){
            _root = v->child[0]; _root->parent = NULL;
            v->child[0] = NULL; release(v);
        }
        return;
    }
    Rank r = 0; while(p->child[r] != v) r++;
    if(0 < r){
        BTNodePosi(T) ls = p->child[r - 1];
        if((_order + 1) / 2 < ls->child.size()){
            v->key.insert(0, p->key[r - 1]);
            p->key[r - 1] = ls->key.remove(ls->key.size() - 1);
            v->child.insert(0, ls->child.remove(ls->child.size() - 1));
            
            if(v->child[0]) v->child[0]->parent = v;
            return;
        }
    }
    
    if(p->child.size() - 1 > r){
        BTNodePosi(T) rs = p->child[r + 1];
        if((_order + 1) / 2 < rs->child.size()){
            v->key.insert(v->key.size(), p->key[r]);
            p->key[r] = rs->key.remove(0);
            v->child.insert(v->child.size(), rs->childe.remove(0));
            
            if(v->child[v->child.size() - 1])
                v->child[v->child.size() - 1]->parent = v;
            return;
        }
    }
    
    if(0 < r){
        BTNodePosi(T) ls = p->child[r - 1];
        ls->key.insert(ls->key.size(), p->key.remove(r - 1)); p->child.remove(r);
        
        ls->child.insert(ls->child.size(), v->child.remove(0));
        if(ls->child[ls->child.size() - 1])
            ls->child[ls->child.size() - 1]->parent = ls;
        while(!v->key.empty()){
            ls->key.insert(ls->key.size(), v->key.remove(0));
            ls->child.insert(ls->child.size(), v->child.remove(0));
            if(ls->child[ls->child.size() - 1]) ls->child[ls->child.size() - 1]->parent = ls;
        }
        release(v);
    } else {
        BTNodePosi(T) rs = p->child[r + 1];
        rs->key.insert(0, p->key.remove(r)); p->child.remove(r);
        rs->child.insert(0, v->child.remove(v->child.size() - 1));
        if(rs->child[0]) rs->child[0]->parent = rs;
        while(!v->key.empty()){
            rs->key.insert(0, v->key.remove(v->key.size() - 1));
            rs->child.insert(0, v->child.remove(v->child.size() - 1));
            if(rs->child[0]) rs->child[0]->parent = rs;
        }
        release(v);
    }
    solveUnderflow(p);
    return;
}

#endif /* solveUnderflow_h */
