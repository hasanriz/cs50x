/*
 *  initials.c
 *  
 *  Author:hasanriz
 *  
 *  This is the solution for Initializing in pset1.
 *  
 *  This program will get your name and output your initials in upper case.
 *  
 *  :)
 */   

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    //get name.
    string name = GetString();
    
    //print first initial in upper case
    printf("%c", toupper(name[0]));
    
    //go through the rest of name to print other initials 
    //also check for end of name.
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == 32 && name[i + 1] != '\0')
            printf("%c", toupper(name[i + 1]));    
    }
    
    //print new line.
    printf("\n");
}
