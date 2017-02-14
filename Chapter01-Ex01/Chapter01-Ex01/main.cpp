//
//  main.cpp
//  Chapter01-Ex01
//
//  Created by fang on 2/14/17.
//  Copyright © 2017 ee. All rights reserved.
//

#include <iostream>
#include "add.hpp"

int main(int argc, const char * argv[]) {
    int c = add_int(1, 2);
    // insert code here...
    std::cout << "Hello, World!\n" << "c: " << c << std::endl;
    return 0;
}
