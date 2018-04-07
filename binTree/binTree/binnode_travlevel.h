//
//  binnode_travlevel.h
//  binTree
//
//  Created by hantianbao on 2017/1/19.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_travlevel_h
#define binnode_travlevel_h

template <typename T> template <typename VST>
void BinNode<T>::travLevel(VST& visit){
    Queue<BinNodePosi(T)> Q;
    Q.enqueue(this);
    while(!Q.empty()){
        BinNodePosi(T) x = Q.dequeue(); visit(x->data);
        if(HasLChild(*x)) Q.enqueue(x->lc);
        if(HasRChild(*x)) Q.enqueue(x->rc);
    }
}

#endif /* binnode_travlevel_h */
