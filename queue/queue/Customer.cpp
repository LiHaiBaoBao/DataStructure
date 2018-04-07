//
//  Customer.cpp
//  queue
//
//  Created by hantianbao on 2017/8/10.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include <stdio.h>
#include "Queue.h"
#include <stdlib.h>

struct Customer
{
    int window;
    unsigned int time;
};

void simulate(int nWin, int servTime)
{
    Queue<Customer>* windows = new Queue<Customer>[nWin];
    for(int now = 0; now < servTime; now++){
        if( rand() % (nWin + 1) ){
            Customer c; c.time = 1 + rand() % 98;
            c.window = bestWindow(windows, nWin);
            windows[c.window].enqueue(c);
        }
        for(int i = 0; i < nWin; i++){
            if(!windows[i].empty())
                if( --windows[i].front().time <= 0 )
                    windows[i].dequeue();
        }
    }
    delete[] windows;
}
