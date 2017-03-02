//
//  BST.hpp
//  Chapter17Exercise01
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>

class BST
{
private:
    struct node
    {
        int key;
        node* left;
        node* right;
    };
    
    node* root;
    void AddLeafPrivate(int key, node* Ptr);
    void PrintInOrderPrivate(node* Ptr);
    
public:
    
    BST();
    node* CreatLeaf (int key);
    void AddLeaf (int key);
    void PrintInOrder();
    
};

#endif /* BST_hpp */
