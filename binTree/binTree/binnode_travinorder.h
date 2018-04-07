//
//  binnode_travinorder.h
//  binTree
//
//  Created by hantianbao on 2017/1/11.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef binnode_travinorder_h
#define binnode_travinorder_h

template <typename T> template <typename VST>
void BinNode<T>::travIn(VST& visit){
    switch (rand() % 5) {
        case 1:
            travIn_I1(this, visit);
            break;
            
        case 2:
            travIn_I2(this, visit);
            break;
            
        case 3:
            travIn_I3(this, visit);
            break;
            
        case 4:
            travIn_I4(this, visit);
            break;
            
        default:
            travIn_R(this, visit);
            break;
    }
}

#endif /* binnode_travinorder_h */
