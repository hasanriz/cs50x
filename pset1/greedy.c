/*
   greedy.c
   
   Author:hasanriz
   
   This is the solution for Time for Change in pset1.
   
   This program is for a greedy cashier who likes coins in his register,
   so it tells the cashier the least amount coins of each type to give back as change .
   
   :)
*/   

#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER  25
#define DIME     10
#define NICKEL    5

int main(void)
{
   //declare variable.
   float amount_owed;
   
   //ask for amount owed and check input.
   do
   {
      printf("How much change is owed?\n");
      amount_owed = GetFloat();
   }
   while (amount_owed <= 0);
   
   int cents_owed = (int)round(amount_owed*100);
   
   int coin_count = 0;
   
   //Counting and adding quarters required
   
   int quarter_count = cents_owed / QUARTER;
   cents_owed = cents_owed % QUARTER;
   coin_count += quarter_count;
   
   //Counting and adding dimes required
   
   int dime_count = cents_owed / DIME;
   cents_owed = cents_owed % DIME;
   coin_count += dime_count;
   
   //Counting and adding nickels required
   
   int nickel_count = cents_owed / NICKEL;
   cents_owed = cents_owed % NICKEL;
   coin_count += nickel_count;
   
   //Adding pennies required
   int penny_count = cents_owed;
   coin_count += penny_count;
   
   //print the total number of coins
   printf("Total coins: %d\n", coin_count);
   //print the number of types of coins
   printf("Quarters: %d\n", quarter_count);
   printf("Dimes: %d\n", dime_count);
   printf("Nickels: %d\n", nickel_count);
   printf("Pennies: %d\n", penny_count);
}
