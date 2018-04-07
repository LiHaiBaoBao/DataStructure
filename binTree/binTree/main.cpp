//
//  main.cpp
//  binTree
//
//  Created by hantianbao on 2017/1/10.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include <iostream>
#include "binTree.h"
#include "PFCForest.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    PFCForest* forest = initForest();
    PFCTree* tree = generateTree(forest); release(forest);
    PFCTable* table = generateTable(tree);
    for(int i = 1; i < argc; i++){
        Bitmap codeString;
        int n = encode(table, codeString, argv[i]);
        decode(tree, codeString, n);
    };
    release(table); release(tree);
    return 0;
}
