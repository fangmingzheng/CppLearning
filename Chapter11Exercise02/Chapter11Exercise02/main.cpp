//
//  main.cpp
//  Chapter11Exercise02
//
//  Created by Fangming Zheng on 2/21/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <string>

struct Personalinformation
{
    std::string name;
    std::string address;
    int phonenumber;
};

void printInformation (Personalinformation user)
{
    std::cout << "name: " << user.name <<'\n';
    std::cout << "address: " << user.address << '\n';
    std::cout << "phone number: " << user.phonenumber << '\n';
}

int main()
{
    Personalinformation newuser;

        newuser.name = "Rachel";
        newuser.address = "Boston";
        newuser. phonenumber = 110;
    
    
    printInformation(newuser);
    std::cout << '\n';
    
    return 0;
}
