//
//  List.hpp
//  Chapter15Exercise02
//
//  Created by Fangming Zheng on 2/23/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
class List {
private:
    struct node {
        int data;
        node* next;
    };
    
typedef struct node* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
    
public: // this is where the functions go
    
    List ();
    void AddNode(int addData);
    void DeleteNode (int delData);
    void PrintList();
};
    
#endif /* List_hpp */
