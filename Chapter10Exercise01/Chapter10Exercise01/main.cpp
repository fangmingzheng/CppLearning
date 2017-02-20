//
//  main.cpp
//  Chapter10Exercise01
//
//  Created by Fangming Zheng on 2/20/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int array [8] [8];
    for (int i = 0; i < 8; i++)
    {   for (int j = 0; j < 8; j++)
        {
            array [i] [j] = i * j;
        }
    }
    
    cout << "Multiplication table: \n";
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << "[" << i << "] [" << j << "] = ";
            cout << array [i] [j] << " ";
            cout << '\n';
        }
    }
}
