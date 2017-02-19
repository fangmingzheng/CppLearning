//
//  main.cpp
//  Chapter8Exercise01
//
//  Created by Fangming Zheng on 2/19/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[])
{
    std::srand(time(0));//time function
    int random_variable = std::rand();//generate a randome number
    std::cout << "Random value on [0 " << RAND_MAX << "] : " << random_variable << std::endl;
}
