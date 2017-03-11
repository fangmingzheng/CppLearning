//
//  main.cpp
//  Chapter17Exercise02
//
//  Created by Fangming Zheng on 3/4/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
    
};



BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert (BstNode* root, int data)
{
     if(root == NULL)
     {
         root = GetNewNode(data);
         return root;
     }
     else if (data <= root->data){
         return root->left = Insert(root->left, data);
     }
     else{
         return root->right = Insert(root->right,data);
     }
}

bool Search(BstNode* root, int data)
{
    if(root == NULL)
    {return NULL;
    }
    
    else if(data <= root->data)
    {
    Search(root->left, data);
    }
    
    else if(data > root->data)
    {
        Search (root->right, data);
    }
    else
    {
    return true;
    }
}

int main()
{
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    int number;
    cout << "Enter number be searched: \n";
    cin >> number;
    if(Search(root,number) == true)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    return 0;
}

