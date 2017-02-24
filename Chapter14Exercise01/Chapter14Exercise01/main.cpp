//
//  main.cpp
//  Chapter14Exercise01
//
//  Created by Fangming Zheng on 2/22/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.



#include <iostream>
#include <algorithm>
using namespace std;


void selectionSort (int *array, int size, bool (*comparisonFcn)(int, int)) //user defined comparison is the third element.
{
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int bestIndex = startIndex; //bestIndext is the index of smallest or largest element inside the array.
        
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[bestIndex], array[currentIndex])) //comparision finished here.
            
            {
                bestIndex = currentIndex;
            }
            
        }
        // swap the start element with the smallest or the largest element.
            
            std::swap(array[startIndex], array[bestIndex]);
        
    }
    
}

bool ascending (int x, int y)
{
    return x > y;
}

bool descending (int x, int y)
{
    return x < y;
}


void printArray( int *array, int size)
 {
    for (int index = 0; index < size; ++index)
    {
        std::cout << array[index] << " ";
    }
 std::cout << '\n';
 
 }


int main()
{
    int array[9] = {3,7,9,5,1,2,8,4,6};
    selectionSort (array, 9 , descending);
    printArray (array, 9);
    selectionSort (array, 9, ascending);
    printArray(array, 9);
    
    return 0;
}

