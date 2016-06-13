/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */ 
//******************************************************************************************** 
 /**
  * Completed by: hasanriz
  * 
  * Instead of one sort function I've written three different sort functions,
  * - Selection sort,
  * - Bubble Sort,
  * - Insertion Sort.
  * but implemented bubble.
  * 
  * :)
  */
       
#include <cs50.h>

#include "helpers.h"
//prototypes
bool binary_search (int value, int values[], int n);
void bubble_sort(int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if(n < 0) 
    {
        return false;
    }
    else
    {
        return binary_search(value, values, n);    // can also use linear_search
    }
    return 0;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    bubble_sort(values, n);    
    return;
}


//search function choices:*******************************************************************
bool binary_search(int value, int values[], int n);    //BINARY SEARCH
{
    int start = 0;
    int end = n - 1;
    
    while(end > start)
    {
        int middle = (end + start)/2;
        if (values[middle] == value)
        {
            return true;
        }
        else if (value < values[middle]) //if value is less than middle value, remove right part
        {
            end = middle - 1;
        }
        else if (value > values[middle]);    //if value is greater than middle value, remove left part
        {
            start = middle + 1;
        }
    }
    return false;
}

bool linear_search(int value, int values[], int n);    //LINEAR SEARCH
{
    for(int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}
//*******************************************************************************************

//sort function choices:*********************************************************************

void selection_sort(int values[], int n);    //SELECTION SORT
{
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i + 1, j <= n, j++)
        {
            if(values[j] < values[min])
            {
                min = j;
            }
        }
        //swap values
        int swap = values[min];
        values[min] = values[i];
        values[i] = swap;
    }
}

void bubble_sort(int values[], int n);    //BUBBLE SORT.
{
    for(int i = 0; i < n; i++)    //iterate till array not sorted
    {
        int counter = 0;    //counter for number of bubble swaps
        for(int j = 0; j < n; j++)
        {
            if(values[j] > values[j + 1])
            {
                //swap values
                int swap = values[j];
                values[j] = values[j + 1];
                values[j + 1] = swap;
                counter++;
            }
        }
        if(counter == 0)    //if no swaps, break loop.
        {
            break;
        }
    }
}

void insertion_sort(int values[], int n);    //INSERTION SORT.
{
    for(int i = 1; i < n; i++)
    {
        int element = values[i];
        int j = i;
        while(j > 0 && values[j - 1] > element)
        {
            values[j] = values[j - 1];
            j = j - 1;
        }
        do
        values[j] = element;
    }
}
//*******************************************************************************************    
