//
//  main.cpp
//  Chapter8Exercise03
//
//  Created by Fangming Zheng on 2/19/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, const char * argv[])
{
    int iSecret, iGuess;
    
    srand (time (NULL)); // initialize randome seed based on time function
    iSecret = rand () % 10 +1; //generate secret number betwwen 1 and 10
    
    do
    {
        std::cout << "Guess the number (1 to 10): ";
        cin >> iGuess;
        if (iGuess < iSecret)
        {
            std::cout << "The secret number is higher" << '\n';
        }
        else if (iGuess > iSecret)
        {
            std::cout << "The secret number is lower" << '\n';
        }
    } while (iGuess != iSecret);
        std::cout << "Congratulation!" << '\n';
    return 0;
}
