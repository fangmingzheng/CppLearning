//
//  main.cpp
//  Chapter19Exercise01
//
//  Created by Fangming Zheng on 3/11/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string input;
    cout << "plese enter a line of text: ";
    getline (cin, input, '\n');
    cout << "you typed in the line " << '\n' << input;
    return 0;
}
