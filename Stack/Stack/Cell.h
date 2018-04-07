//
//  Cell.h
//  Stack
//
//  Created by hantianbao on 2017/8/9.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#ifndef Cell_h
#define Cell_h

typedef enum { AVAILABLE, ROUTE, BACKTRACKED, WALL } Status;

typedef enum { UNKNOWN, EAST, WEST, NORTH, NO_WAY } ESWN;

inline ESWN nextESWN( ESWN eswn ) { return ESWN(eswn + 1); }

struct Cell{
    int x, y; Status status;
    ESWN incoming, outgoing;
};

#define LABY_MAX 24
Cell laby[LABY_MAX][LABY_MAX];

#endif /* Cell_h */
