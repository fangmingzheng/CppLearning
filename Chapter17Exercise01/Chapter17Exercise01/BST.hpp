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
    node* CreatLeaf (int key);
    node* root;
    void AddLeafPrivate(int key, node* Ptr);
    void PrintInOrderPrivate(node* Ptr);
    node* ReturnNode(int key);
    node* ReturnNodePrivate (int key, node* Ptr);
    
public:
    
    BST();
    
    void AddLeaf (int key);
    void PrintInOrder();
    int ReturnRootKey();
    void PrintChildren(int key);
};

#endif /* BST_hpp */
