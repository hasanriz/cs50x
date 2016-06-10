/*
 *  mario.c
 *   
 *  Author:hasanriz
 *   
 *  This is the solution for Itsa Mario in pset1.
 *  It prints a pyramid, rather primitive, like in mario in the end of a level.
 *
 *  :)
 */   

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declare variable.
    int height;
    
    //take user input and check it.
    do
    {
        printf("Height:");
        height=GetInt();
        if (height == 0)
        {
            return 0;
        }
    }
    
    while (height < 0 || height > 23);
    
    //print each level of the pyramid at a time using a loop.
    for(int i = 0; i < height; i++)
    {
        //print required spaces using a loop.
        for(int space = 0; space < height - 1 - i; space++)
        {
            printf(" ");
        }
        
        //print required hashes using a loop.
        for(int hash = 0; hash < i + 2; hash++)
        {
            printf("#");
        }
        
        //print new line.
        printf("\n");
    }
}
