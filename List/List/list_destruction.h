//
//  list_destruction.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_destruction_h
#define list_destruction_h

template <typename T> List<T>::~List()
{ clear(); delete header; delete trailer; }

template <typename T> int List<T>::clear(){
    int oldSize = _size;
    while(0 < _size) remove(header->succ);
    return oldSize;
}


#endif /* list_destruction_h */
