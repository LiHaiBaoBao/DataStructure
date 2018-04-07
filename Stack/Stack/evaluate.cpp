//
//  evaluate.cpp
//  Stack
//
//  Created by hantianbao on 2017/1/10.
//  Copyright © 2017年 hantianbao. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"

#define N_OPTR 9
typedef enum {ADD, SUB, MUL, DIV, POW, FAC, L_P, R_P, EOE} Operator;

const char pri[N_OPTR][N_OPTR]{
    /*          |---------------当前运算符-------------|         */
    /*          +   -   *   /   ^   !   (   )   \0          */
    /*--    +*/'>','>','<','<','<','<','<','>','>',
    /*|     -*/'>','>','<','<','<','<','<','>','>',
    /*栈    **/'>','>','>','>','<','<','<','>','>',
    /*顶    /*/'>','>','>','>','<','<','<','>','>',
    /*运    ^*/'>','>','>','>','>','<','<','>','>',
    /*算    !*/'>','>','>','>','>','>',' ','>','>',
    /*符    (*/'<','<','<','<','<','<','<','=',' ',
    /*|     )*/' ',' ',' ',' ',' ',' ',' ',' ',' ',
    /*--   \0*/'<','<','<','<','<','<','<',' ','='
};

float evaluate(char* S, char*& RPN){//对（已删除白空格的）表达式求值，并转化为逆波兰表达式RPN
    Stack<float> opnd; Stack<char> optr;
    optr.push('/0');
    while(!optr.empty()){
        if(isdigit(*S)){
            readNumber(S, opnd); append(RPN, opnd.top());
        }else
            switch(orderBetween(optr.top(), *S)){
                    case '<':
                        optr.push(*S); S++;
                        break;
                    case '=':
                        optr.pop(); S++;
                        break;
                    case '>':{
                        char op = optr.pop(); append(RPN, op);
                        if('!' == op){
                            float pOpnd = opnd.pop();
                            opnd.push(calcu(op, pOpnd));
                        }
                        else{
                            float pOpnd2 = opnd.pop(); pOpnd1 = opnd.pop();
                            opnd.push(calcu(pOpnd1, op, pOpnd2));
                        }
                        break;
                    }
                default : exit(-1);
            }//switch
    }//while
    return opnd.pop();
}
