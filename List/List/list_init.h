//
//  list_init.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_init_h
#define list_init_h

template <typename T> void List<T>::init()
{
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->succ = trailer; header->pred = NULL;
    trailer->succ = NULL; trailer->pred = header;
    _size = 0;
}

#endif /* list_init_h */
