/*
 *  vigenere.c
 *  
 *  Author:hasanriz
 *  
 *  This is the solution for "Parlez-vous français?" in pset1.
 *  
 *  This program will take a command line key(alphabetic) and a message input,
 *  encrypt it using the vigenere cipher and output the encrypted message.
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
    string key;
    
    if (argc != 2)    //yell at user for not giving a proper number of commands 
    {
        printf("Please give me a valid key!\n");
        return 1;
    }
    else if (argv[1])
    {
        for (int c = 0; c < strlen(argv[1]); c++)
        {
            if(!isalpha(argv[1][c]))    //yell at user for not giving an alphabetical key
            {
               printf("Please give me a valid key!\n");
               return 1;
            }
            else
            {
                key = argv[1];    //save key.   
            }
        }
    }
    
    string plaintxt = GetString();    //prompt user for message.
    int counter = 0;    //declare and initialize counter for each non alphabetic char.
    for (int i = 0, n = strlen(plaintxt); i < n; i++)
    {
        if (!isalpha(plaintxt[i]))    //check whether the char is not an alphabet 
        {
            printf("%c", plaintxt[i]);     //print without encrypting.
            counter++;
        }
        else    //if aphabetic then,
        {
            int cipherletter;    //declare encrypted letter integer value
            int m = strlen(key); 
        
            if (islower(plaintxt[i]))    //check if message character is lower case.                                  
            {                                                                                            
                if (islower(key[(i - counter) % m]))    //if key character lower case                          
                {
                    cipherletter = (((plaintxt[i] - 'a') + (key[(i - counter) % m] - 'a')) % 26) + 'a';
                }
                else    //if key character upper case.
                {
                    cipherletter = (((plaintxt[i] - 'a') + (key[(i - counter) % m] - 'A')) % 26) + 'a';
                }
            }
            else    //if message character upper case,
            {
                if (islower(key[(i - counter) % m]))    //if key character lower case
                {
                    cipherletter = (((plaintxt[i] - 'A') + (key[(i - counter) % m] - 'a')) % 26) + 'A';
                }
                else     //if key character upper case.
                {
                    cipherletter = (((plaintxt[i] - 'A') + (key[(i - counter) % m] - 'A')) % 26) + 'A';
                }
            }
            printf("%c", cipherletter);     //print encrypted character.
        }
    }
    printf("\n");   
    return 0;    //end program
}
