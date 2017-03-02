//
//  main.cpp
//  Chapter16Exercise01
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;
void printNum(int num)
{
    cout << num;
    if (num < 9 )
    {
        printNum (num + 1);
    }
    cout << num;
}

int main ()
{
    printNum(1);
    return 0;
}
