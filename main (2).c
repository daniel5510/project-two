/*-------------------------------------
*This program finds the product and 
*average of 4 integers inputted from the user 
*using integer arithmetic, and also outputs 
*the product and average using floating-point
*arithmetic
*Class: CS 107, Fall 2024
*Author: Daniel Lopez
*Date: September 9th, 2024
------------------------------------*/



#include <stdio.h>

int main(void) {
   int userNum1;
   int userNum2;
   int userNum3;
   int userNum4;
   int numProduct1;
   int numAverage2;
   double numProduct;
   double numAverage;
   
   //prompts user for four integer values and prints their product and average
   scanf("%d %d %d %d", &userNum1, &userNum2, &userNum3, &userNum4); 
   numProduct1 = userNum1 * userNum2 * userNum3 * userNum4; 
   numAverage2 = (userNum1 + userNum2 + userNum3 + userNum4) / 4; 
   printf("%d %d\n", numProduct1, numAverage2); 


    //calculates the user inputs using floating-point arithmetic by converting ints to double 
   numProduct =(double)(userNum1 * userNum2 * userNum3 * userNum4); 
   numAverage = (double)(userNum1 + userNum2 + userNum3 + userNum4) / 4;
   printf("%0.3lf %0.3lf\n", numProduct, numAverage); 

   return 0;
}
