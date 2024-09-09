/*-----------------------------------
*This program prompts user for three
floating-point values which represent
nickels, dimes, and quarters and finds 
the sum. 
*Class: CS 107, Fall 2024
*Author: Daniel Lopez
*Date: September 9th, 2024
------------------------------------*/

#include <stdio.h>

int main() {

    double numNickels;
    double numDimes;
    double numQuarters;
    double numTotal;

    //prompts user to input floating-point values for nickels, dimes, and quarters 
   scanf("%lf %lf %lf", &numNickels, &numDimes, &numQuarters);

    //calculates the sum of the user inputs 
   numTotal = (numNickels * 0.05) + (numDimes * 0.10) + (numQuarters * 0.25); 
   printf("Amount: $%0.2lf\n", numTotal);

   return 0;
}
