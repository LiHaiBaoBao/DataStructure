//
//  list_traverse.h
//  List
//
//  Created by hantianbao on 2017/1/2.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef list_traverse_h
#define list_traverse_h

template <typename T> void List<T>::traverse(void (*visit) (T&))
{ for(ListNodePosi(T) p = header->succ; p != trailer; p = p->succ) visit(p->data); }

template <typename T> template <typename VST>
void List<T>::traverse(VST& visit)
{ for(ListNodePosi(T) p = header->succ; p != trailer; p = p->succ) visit(p->data); }

#endif /* list_traverse_h */
