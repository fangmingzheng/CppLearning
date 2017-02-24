//
//  main.cpp
//  Chapter15Exercise01
//
//  Created by Fangming Zheng on 2/23/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//


#include <iostream>
#include <ctime>

using namespace std;

void getSecond(unsigned long *par);

int main ()
{
    unsigned long sec;
    getSecond (&sec);
    cout << "Number of seconds: " << sec << endl;
    
    return 0;

}

void getSecond(unsigned long *par)
{
    *par = time(NULL);
    return;
}

