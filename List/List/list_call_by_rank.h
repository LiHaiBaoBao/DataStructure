//
//  list_call_by_rank.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_call_by_rank_h
#define list_call_by_rank_h

template <typename T>
T& List<T>::operator[] (Rank r) const{
    ListNodePosi(T) p = first();
    while(0 < r--) p = p->succ;
    return p->data;
}

#endif /* list_call_by_rank_h */
