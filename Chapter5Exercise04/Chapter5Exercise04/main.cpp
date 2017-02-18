//
//  main.cpp
//  Chapter5Exercise04
//
//  Created by Fangming Zheng on 2/18/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    
    for (int i = 0; i < 10; i++)
    {
        cout << '\t' << i;
    }
    cout << '\n'; //cout << i;// i = 0,1,2,3,4,5,6,7,8,9,
    
    for (int i = 0;  i < 10; ++i)
    {
        cout << i;
        
        for (int j = 0; j < 10; ++j)
        {
            cout << '\t' << i * j; // j = 1,2,3,4,5,6,7,8,9,
        }
        cout << '\n';
    }
    
   
    
}
