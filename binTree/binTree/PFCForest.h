//
//  PFCForest.h
//  binTree
//
//  Created by hantianbao on 2017/1/19.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef PFCForest_h
#define PFCForest_h

#include "../BinTree/BinTree.h"
typedef BinTree<char> PFCTree;

#include "../../Vector/Vector/Vector.h"
typedef Vector<PFCTree*> PFCForest;

#include "../Bitmap/Bitmap.h"
#include "../Skiplist/Skiplist.h"
typedef Skiplist<char, char*> PFCTable;

#define N_CHAR (0x80 - 0x20)

#endif /* PFCForest_h */
