//
//  main.cpp
//  Chapter14Exercise02
//
//  Created by Fangming Zheng on 2/22/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int *pointer = NULL;
    cout << " How many integers are you gonna enter: " << '\n';
    int input;
    cin >> input;
    
    pointer = new int [input];
    
    int temp;
    
    for (int counter = 0; counter < input; counter++)
    {
        cout << "enter the item " << counter+1 << std::endl;
        
        cin >> temp;
        
        *(pointer+counter) = temp;
        
        
    }
    std::cout << " The items you have entered are" << std::endl;

    for(int counter = 0; counter < input; counter++)
    {
        cout << counter+1 << "intem is " << *(pointer+counter)<< '\n';
        
    }
    
    delete []pointer;
    return 0;
    
}
