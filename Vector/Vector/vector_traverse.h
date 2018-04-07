//
//  vector_traverse.h
//  Vector
//
//  Created by hantianbao on 2016/12/27.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#ifndef vector_traverse_h
#define vector_traverse_h

template <typename T> void Vector<T>::traverse(void (*visit) (T&))
{ for(int i = 0; i < _size; i++) visit(_elem[i]); }

template <typename T> template <typename VST>
void Vector<T>::traverse(VST& visit)
{ for(int i = 0; i < _size; i++) visit(_elem[i]); }

#endif /* vector_traverse_h */
