//
//  main.cpp
//  Chapter17Exercise03
//
//  Created by Fangming Zheng on 3/5/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int key_value;
    node *p_left;
    node *p_right;
};

node *insert (node *p_tree, int key)
{
    if (p_tree == NULL)
    {
        node* p_new_tree = new node;
        p_new_tree->p_left = NULL;
        p_new_tree->p_right = NULL;
        p_new_tree->key_value = key;
        return p_new_tree;
    }
    if (key < p_tree->key_value)
    {
        p_tree->p_left = insert(p_tree->p_left, key);
    }
    else
    {
        p_tree->p_right = insert( p_tree->p_right, key );
    }
    return p_tree;
}

node *search (node *p_tree, int key)
{
   if (p_tree == NULL)
   {
       return NULL;
   }
    else if (key == p_tree->key_value)
    {
        return p_tree;
    }
    else if (key < p_tree->key_value)
    {
        return search(p_tree->p_left, key);
    }
    else
    {
        return search (p_tree->p_right, key);
    }
}

void destroy_tree (node *p_tree)
{
    if (p_tree != NULL)
    {
        destroy_tree (p_tree->p_left);
        destroy_tree (p_tree->p_right);
        cout << "Deleting node: " << p_tree->key_value;
        delete p_tree;
    }
}
node * remove_max_node (node *p_tree, node* p_max_node)
{
    if (p_tree == NULL)
    {
        return NULL;
    }
    if (p_tree == p_max_node)
    {
        return p_max_node->p_left;
    }
    p_tree->p_right = remove_max_node (p_tree->p_right, p_max_node);
    return p_tree;
}
node *find_max (node* p_tree)
{
    if (p_tree == NULL)
    {
        return NULL;
    }
    if (p_tree->p_right == NULL)
    {
        return p_tree;
    }
    return find_max (p_tree->p_right);
}
node *remove (node* p_tree, int key)
{
    if (p_tree == NULL)
    {
        return NULL;
    }
    if (p_tree->key_value == key)
{
    if (p_tree->p_left == NULL)
    {
        node* p_right_subtree = p_tree->p_right;
        delete p_tree;
        return p_right_subtree;
    }
    if (p_tree->p_right == NULL)
    {
        node* p_left_subtree = p_tree->p_left;
        delete p_tree;
        return p_left_subtree;
    }
    node *p_max_node = find_max(p_tree->p_left);
    p_max_node->p_left = remove_max_node (p_tree->p_left, p_max_node);
    p_max_node->p_right = p_tree->p_right;
    delete p_tree;
    return p_max_node;
}
    else if (key < p_tree->key_value)
    {
        p_tree->p_left = remove(p_tree->p_left, key);
    }
    else
    {
        p_tree->p_right = remove(p_tree->p_right, key);
    }
    return p_tree;
}
void sawp(int&x, int&y)
{
    int temp = x;
    x = y;
    y= temp;
}

int main ()
{
    int choice = 0;
    int node_value = 0;
    node *p_root = NULL;
    while (true)
    {
        cout << "what would you like to do?\n\n1.Add a node\n2. Remove a node\n3. Destroy the tree\n4. Check if a node is in the tree\n5. Exit the program\n";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Please enter a value to insert: ";
                cin >> node_value;
                p_root = insert(p_root, node_value);
                cout << "\nAdded value " <<node_value << " to tree\n\n";
                break;
            case 2:
                cout << "Please enter a value to remove: ";
                cin >> node_value;
                p_root = remove(p_root, node_value);
                cout << "\nRemoved value " << node_value << " from the tree\n\n";
                break;
            case 3:
                destroy_tree(p_root);
                p_root = NULL;
                cout << "\nDestroyed tree\n\n";
                break;
            case 4:
            
            {
                cout << "Please enter a value to find: ";
                cin >> node_value;
                node* p_search_node = search( p_root, node_value );
                if ( p_search_node != NULL )
                {
                    cout << "\nFound node\n\n";
                }
                else
                {
                    cout << "\nNode not found\n\n";
                }
            }
                break;
            case 5:
                return 0;
            default:
                cout << "Bad input...\n\n";
                
                
                
        }
    }
}
