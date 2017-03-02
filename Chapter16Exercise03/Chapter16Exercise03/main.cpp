//
//  main.cpp
//  Chapter16Exercise03
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//


#include <iostream>


using namespace std;

int power (int x, int y)
{
    if (y == 0)
    {
        return x = 1;
    }
    else if (y == 1)
    {
        return x;
    }
    else
    {
        return (x * power(x, y-1));
    }
}
int main()
{
    cout << "2^3 = " << power(2,3) << std::endl;
    return 0;
}


