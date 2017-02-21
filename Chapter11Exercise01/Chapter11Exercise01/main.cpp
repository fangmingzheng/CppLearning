//
//  main.cpp
//  Chapter11Exercise01
//
//  Created by Fangming Zheng on 2/20/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <string>

struct PlayerInfor
{
    int skill_level;
    std::string name;
};

using namespace std;

int main ()
{
    PlayerInfor players [5];
    for ( int i = 0; i < 5; i++)
    {
        cout << "please enter the name for player: " << i <<'\n';
        cin >> players [i].name;
        cout << "please enter the skill level for " << players [i].name <<'\n';
        cin >> players [i].skill_level;
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << players [i].name << " is at skill level "<< players [i].skill_level << '\n';
    }
}
