/*-----------------------------------
*This program prompts user for a 
*string and outputs a message using
*the user's string 
*Class: CS 107, Fall 2024
*Author: Daniel Lopez
*Date: September 9th, 2024
------------------------------------*/


#include <stdio.h>

int main(void) {
   char userName[50];
   
   //promts user for a string and prints a welcome message
   scanf("%s", userName);
   printf("Hey %s!\n", userName);
   printf("Welcome to zyBooks!\n");

   return 0;
}
