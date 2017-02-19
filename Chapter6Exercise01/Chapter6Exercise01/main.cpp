//
//  main.cpp
//  Chapter6Exercise01
//
//  Created by Fangming Zheng on 2/18/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
# include "add.hpp"

int main(int argc, const char * argv[])
{
    int result = add (1, 2);
    std::cout << "The result is : " << result << '\n';
    std::cout << "Adding 3 and 4 gives  us : " << add (3,4) << endl;
}
