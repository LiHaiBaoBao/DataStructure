//
//  binnode_succ.h
//  binTree
//
//  Created by hantianbao on 2017/1/17.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_succ_h
#define binnode_succ_h

template <typename T> BinNodePosi(T) BinNode<T>::succ(){
    BinNodePosi(T) s = this;
    if(rc){
        s = rc;
        while(HasLChild(*s)) s = s->lc;
    }else{
        while(IsRChild(*s)) s = s->parent;
    }
    return s;
}

#endif /* binnode_succ_h */
