 //
//  BST.cpp
//  Chapter17Exercise01
//
//  Created by Fangming Zheng on 3/2/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include "BST.hpp"

#include <iostream>

#include <cstdlib>


using namespace std;

BST::BST()
{
    root = NULL;
    
}

BST::node* BST::CreatLeaf(int key)
{
    node* n = new node; 
    n->key = key;
    n->left = NULL;
    n->right = NULL;
    
    return n;
    
}

void BST::AddLeaf (int key)
{
    AddLeafPrivate(key,root);
}
void BST::AddLeafPrivate(int key, node* Ptr)
{
    if (root == NULL)
    {
        root = CreatLeaf(key);
        
    }
    else if (key < Ptr->key)
    {
        if(Ptr->left != NULL)
        {
            AddLeafPrivate(key, Ptr->left);
        }
        else
        {
            Ptr->left = CreatLeaf(key);
        }
    }
    else if(key > Ptr->key)
    {
        if (Ptr->right != NULL)
        {
            AddLeafPrivate(key, Ptr->left);
        }
        else
        {
            Ptr->right = CreatLeaf(key);
        }
    }
    else
        {
            cout << " The key " << key << " has already been added to the tree.";
        }
        
}


void BST::PrintInOrder()
{
    PrintInOrderPrivate(root);
}
void BST::PrintInOrderPrivate(node* Ptr)
{
    if (root != NULL)
   {
       if (Ptr->left != NULL)
       {
           PrintInOrderPrivate(Ptr->left);
       }
       cout << Ptr->key << " ";
       if (Ptr->right != NULL)
       {
           PrintInOrderPrivate(Ptr->right);
       }
       
   }
   else{
       cout << " The tree is empty" << endl;
   }
}
BST::node* BST:: ReturnNode(int key)
{
    return ReturnNodePrivate(key, root);
}

BST::node* BST::ReturnNodePrivate (int key, node* Ptr)
{
   if(Ptr != NULL)
   {
       if(Ptr->key == key)
       {
           return Ptr;
       }
       else
       {
           if(key < Ptr->key)
           {
               return ReturnNodePrivate (key, Ptr->left);
           }
           else
           {
               return ReturnNodePrivate (key, Ptr->right);
           }
       }
   }
   else{
       return NULL;
   }
}
int BST::ReturnRootKey()
{
    if(root!= NULL)
    {
        return root->key;
    }
    else{
        return -1000;
    }
}
void BST::PrintChildren(int key)
{
    node* Ptr = ReturnNode(key);
    if (Ptr != NULL)
    {
        cout << "Parent Node = " << Ptr->key << endl;
        Ptr->left == NULL?
        cout << "Left Child = NULL\n":
        cout << "Left Child = " << Ptr->right->key << endl;
        
        Ptr->right == NULL?
        cout << "Right Child = NULL\n":
        cout << "Right Child = " << Ptr->right->key << endl;
    }
    else{
        cout << "Key " << key  << " is not ine tree\n";
    }
}

