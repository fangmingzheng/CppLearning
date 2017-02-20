//
//  main.cpp
//  Chapter8Exercise02
//
//  Created by Fangming Zheng on 2/19/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int randRang (int low, int high)
{
    return rand() % (high - low + 1) + low; //should be (0,1,2,3,4,5,6,7)+4 = 4,5,6,7,8,9,10,11
}
int main (int argc, const char * argv [])
{
    srand (time (NULL));
    for (int i = 0; i < 1000; i++)
    {
        std::cout << randRang (4,10) <<'\n';
    }
}
