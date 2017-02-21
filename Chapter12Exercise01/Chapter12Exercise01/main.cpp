//
//  main.cpp
//  Chapter12Exercise01
//
//  Created by Fangming Zheng on 2/21/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int x; //A normal integer
    int *p_int; // A pointer to an integer
    
    p_int = & x; // assin the address of x to p_int.
    
    cout << "please enter a numebr: ";
    cin >> x; // enter a value for x
    cout << *p_int <<'\n'; //*p_int is same as x.
    *p_int = 10;
    cout << x;
    
    
}
