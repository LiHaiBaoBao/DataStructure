//
//  main.cpp
//  Vector
//
//  Created by hantianbao on 2016/12/25.
//  Copyright © 2016年 hantianbao. All rights reserved.
//

#include <iostream>
#include "Vector.h"

using namespace std;

void transform(string oriStr, string &outStr)
{
    outStr = "";
    
    for(int j = 0; j < oriStr.length(); ++j)
    {
        if(int(oriStr[j]) < 128 && int(oriStr[j]) > 32){
            cout << int(oriStr[j]) << endl;
            outStr += char(-17);
            outStr += char(-67);
            int k = int(oriStr[j]) -224;
            cout << k << endl;
            outStr += char( k );
        }
        else if( int(oriStr[j]) == -30 && int(oriStr[j+1]) == -128 && int(oriStr[j+2]) == -100 )
        {
            j += 2;
           
        }
        else if( int(oriStr[j]) == -30 && int(oriStr[j+1]) == -128 && int(oriStr[j+2]) == -99 )
        {
            j += 2;
            
        }
        else if( int(oriStr[j]) == -29 && int(oriStr[j+1]) == -128 && int(oriStr[j+2]) == -127 )
        {
            j += 2;
            
        }
        else{
            outStr += oriStr[j];
            
        }
        
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    string test_string = "国航 测试集／ａｂｃ";
    cout << test_string << endl;
    for(int i = 0; i < test_string.size(); ){
        cout << int(test_string[i]) << ' ';
        if(test_string[i] == ' '){
            test_string.erase(i);
            continue;
        }
        else
            ++i;
    }
    cout << test_string << endl;
    
    cout << endl << "*****" << endl;
    
    string tst_string = "“”、";
    //for(int i = 0; i < tst_string.size(); i++)
        //cout << int(tst_string[i]) << ' ';
    
    string trans_string = "国航测试集“”、、/abc";
    
    string out_string;
    
    transform(trans_string, out_string);
    for(int i = 0; i < trans_string.size(); i++){
        cout << int(trans_string[i]) << ' ';
    cout << int(out_string[i]) << '\n';
                }
    
    cout << out_string << endl;
    return 0;
}
