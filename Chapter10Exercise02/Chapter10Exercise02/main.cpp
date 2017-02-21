//
//  main.cpp
//  Chapter10Exercise02
//
//  Created by Fangming Zheng on 2/20/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
using namespace std;

int sumArray(int values [], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += values [i];
    }
    return sum;
}


int main()
{
    int values [10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i << " : ";
        cin >> values [i];
    }
    cout << sumArray (values,10) << '\n';
}
