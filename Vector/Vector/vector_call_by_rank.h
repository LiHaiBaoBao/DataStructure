//
//  vector_call_by_rank.h
//  Vector
//
//  Created by hantianbao on 2016/12/26.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_call_by_rank_h
#define vector_call_by_rank_h

template <typename T> T& Vector<T>::operator[] (Rank r) const{
    return _elem[r];
}

#endif /* vector_call_by_rank_h */
