//
//  main.cpp
//  CHapter5Exercise03
//
//  Created by Fangming Zheng on 2/18/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string password;
    while (1)
    {
        cout << " please enter your password: ";
        cin >> password;
        if( password == "foobar")
        {
            break;
        }
    }
    cout << "welcome, you got the password right";
}
