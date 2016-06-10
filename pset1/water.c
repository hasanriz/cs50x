/*
 *  water.c
 *  
 *  Author:hasanriz
 *  
 *  This is the solution for Smart Water in pset1.
 *  
 *  :)
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //take user input.
    printf("minutes:");
    
    //declare variables.
    int minutes=GetInt();
    int bottles= minutes*12;
    
    //provide output of number of equivalent bottles. 
    printf("bottles: %d\n", bottles );
}
