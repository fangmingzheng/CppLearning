//
//  main.cpp
//  Chapter9Exercise01
//
//  Created by Fangming Zheng on 2/19/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

bool isDivisible (int number, int divisor);
bool isPrime (int number);

using namespace std;
int main ()
{
    for (int i = 2; i < 100; i++)
    {
        if (isPrime (i))
        {
            cout << i << std::endl;
        }
    }
}

bool isPrime (int number)
{
    
    
    for (int i = 2; i < number; i++)
    {
        if (isDivisible (number, i))
            {
                return false;
            }
            
    }
    return true;
}
bool isDivisible (int number, int divisor)
{
    return number % divisor == 0;
}
