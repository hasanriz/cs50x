/*
 *  caesar.c
 *  
 *  Author:hasanriz
 *  
 *  This is the solution for "Hail, Caesar!" in pset1.
 *  
 *  This program will take a message input by the user, encrypt it using the caesar cipher and output it.
 *  
 *  :)
 */   

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    //yell at user for not giving a proper command line.
    if (argc != 2)
    {
        printf("Please give me a valid key\n");
        return 1;
    }
    
    //convert the input key from string to an integer value.
    int key = atoi(argv[1]) % 26;
    
    string plaintxt = GetString();    //prompt user for message.
    
    for (int i = 0, n = strlen(plaintxt); i < n; i++)
    {
        if (isalpha(plaintxt[i]))    //check whether the char is a alphabet 
        {
            int plainletter;
            int cipherletter;
           
            if (islower(plaintxt[i]))    //check if alphabet is lower case.
            {
                plainletter = plaintxt[i] - 'a';    //converting to alphabetic index
                cipherletter = ((plainletter + key) % 26) + 'a';    //cipher letter
            }
            else
            {
                plainletter = plaintxt[i] -'A';    //converting to alphabetic index
                cipherletter = ((plainletter + key) % 26) + 'A';    //cipher letter
            }
            
            //print encrypted alphabet.
            printf("%c", cipherletter);
        }
        
        else
        {
            //print other characters without encrypting.
            printf("%c", plaintxt[i]);
        }
    }
    //end program
    printf("\n");
    return 0;
}
