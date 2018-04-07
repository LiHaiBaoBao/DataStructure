//
//  main.cpp
//  test_main
//
//  Created by hantianbao on 2017/7/26.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "Hello, World!\n";
    int lo = 20, hi = 30;
    while(lo < hi--)
        std::cout << hi << ' ';
    std::cout << std::endl;
    return 0;
}
