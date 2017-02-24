//
//  main.cpp
//  Chapter15Exercise02
//
//  Created by Fangming Zheng on 2/23/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <cstdlib>
#include "List.hpp"

int main (int argc, const char * argv[])
{
    List Rachel;
    
    Rachel.AddNode(3);
    Rachel.AddNode(5);
    Rachel.AddNode(7);
    Rachel.PrintList();
    
    
    Rachel.DeleteNode(3);
    Rachel.PrintList();
    
    return 0;
}
