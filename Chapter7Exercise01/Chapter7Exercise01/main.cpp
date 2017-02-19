//
//  main.cpp
//  Chapter7Exercise01
//
//  Created by Fangming Zheng on 2/19/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
using namespace std;

void playgame()
{}
void loadgame()
{}
void playmultiplayer ()
{}


int main(int argc, const char * argv[])
{
    int input;
    std::cout << "1. Play game \n";
    std::cout << "2. Load game \n";
    std::cout << "3. Play multiplayer\n";
    std::cout << "4. Exit\n";
    std::cout << "Selection: ";
    cin >> input;
    switch (input)
    {
        case 1:
            playgame();
            break;
        case 2:
            loadgame();
            break;
        case 3:
            playmultiplayer();
            break;
        case 4:
            cout << "Thank you ofr playing!\n";
        default:
            cout << "Error, bad input, quitting\n";
            break;
            
    }
    

}
