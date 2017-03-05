//
//  main.cpp
//  Chapter17Exercise01
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//
#include <iostream>
#include <cstdlib>
#include "BST.hpp"

using namespace std;

int main ()
{
    
    
    int TreeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
    
    BST myTree;
    
    cout << "Printing the tree in order\n Before adding numbers\n";
    
    myTree.PrintInOrder();
    
    for(int i = 0; i < 16; i++)
    {
        myTree.AddLeaf(TreeKeys[i]);
    }
    cout << "Print the tree in order\n After adding numbers\n";
    
    myTree.PrintInOrder();
    
    cout << endl;
    
    myTree.PrintChildren(myTree.ReturnRootKey());
    
    return 0;
}
