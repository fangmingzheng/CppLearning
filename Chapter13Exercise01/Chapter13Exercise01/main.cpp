//
//  main.cpp
//  Chapter13Exercise01
//
//  Created by Fangming Zheng on 2/21/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

void  swap1(int left, int right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
void swap2 (int *p_left, int *p_right)
{
    int temp = *p_left;
    *p_left = *p_right;
    *p_right = temp;
}

int main()
{
    int x = 1, y = 2;
    swap1 (x, y);
    std::cout << x << " " << y <<'\n';
    swap2(&x, &y);
    std::cout << x << " "<< y << '\n';
    

    
}
