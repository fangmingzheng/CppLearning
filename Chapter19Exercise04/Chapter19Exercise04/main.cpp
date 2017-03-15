//
//  main.cpp
//  Chapter19Exercise04
//
//  Created by Fangming Zheng on 3/11/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

//class; group similar function together.

#include <iostream>
#include <string>
using namespace std;

class RachelClass{
    
    public:     //access specifer.
        RachelClass(string z)  //constructor, initializing variable
    {
        setName(z);
    }
        void setName(string x) //x's type is string
    {
        name = x;
    }
    string getName () //Never make variable public. get vairble through public function
    {
        return name;
    }

    private:
        string name;
    
};

int main()
{
   
    RachelClass ro ("Lucky");
    cout << ro.getName()<< endl;
    RachelClass ro2 ("maSalad");  //more than one onject from the same class will not be overwirrten. 
    cout << ro2.getName();
    
    return 0;
    
}
