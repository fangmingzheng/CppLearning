//
//  main.cpp
//  Chapter19Exercise03
//
//  Created by Fangming Zheng on 3/11/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int i = 0;
    int cat_appearance = 0;
    cout << "please enter a line of text: ";
    getline(cin, input, '\n');
    for (i = input.find("cat", 0); i != string::npos; i = input.find("cat", i))
    {
        cat_appearance++;
        i++;
                                                                         
    }
    cout << "The word cat appears " << cat_appearance << " inthe string " << '"'<<input << '"';
    
}
