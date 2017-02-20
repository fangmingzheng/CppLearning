//
//  main.cpp
//  Chapter9Exercise02
//
//  Created by Fangming Zheng on 2/20/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
    int num, Ldigit, Rdigit;
    string ones [] = {"zero", "one", "two","three","four", "five", "six", "seven", "eight", "nine" , "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen" };
    string tens [] = {"twenty", "thrity", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    cout << "Enter a number from 1 to 99: " << std::endl;
    cin >> num;
    if (num >= 100 || num <= 0)
    {
        cout << "Error";
    }
    else if (num < 20)
    {
        cout << "the number you entered is : " << ones [num] << '\n';
        
    }
    else if (num >= 20)
    {
        Rdigit = num % 10;
        Ldigit = num / 100;
        cout << "the number you entered is : " << tens [Ldigit] << ones [Rdigit];
        
    }
    
    
    return 0;

}
