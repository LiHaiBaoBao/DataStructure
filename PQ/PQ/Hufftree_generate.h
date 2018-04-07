//
//  Hufftree_generate.h
//  PQ
//
//  Created by hantianbao on 2017/10/15.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Hufftree_generate_h
#define Hufftree_generate_h

HuffTree* generateTree(HuffForest* forest){
    while(1 < forest->size()){
        HuffTree* s1 = forest->delMax(); HuffTree* s2 = forest->delMax();
        HuffTree* s = new HuffTree();
        s->insertAsRoot(HuffChar('^', s1->root()->data.weight + s2->root()->data.weight));
        s->attachAsLC(s->root(), s1); s->attachAsRC(s->root(), s2);
        forest->insert(s);v````````````````````````````
    }
}

#endif /* Hufftree_generate_h */
