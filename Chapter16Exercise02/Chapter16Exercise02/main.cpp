//
//  main.cpp
//  Chapter16Exercise02
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

int factorialFinder(int x)
{
    if (x == 1)
    {
        return 1;
        
    }else
    {
        return x * factorialFinder(x-1); // -1 number each time
    }
    
}
int main()
{
    std::cout << factorialFinder(5) << std::endl; // 5!
    return 0;
}
