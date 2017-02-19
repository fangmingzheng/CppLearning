//
//  main.cpp
//  Chapter6Exercise02
//
//  Created by Fangming Zheng on 2/18/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;
void changeArgument (int x)
{
    x = x + 5;
}

int main ()

{

    int y = 4;
    changeArgument (y);
    cout << y << std::endl;
}
