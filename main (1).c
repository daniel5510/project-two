/*-----------------------------------
*This program finds the per-mile cost 
*in floating point values when given 
*the gas mileage and cost per gallon 
*by the user, and outputs the per-mile 
*cost at 20, 75, and 500 miles. 
*Class: CS 107, Fall 2024
*Author: Daniel Lopez
*Date: September 9th, 2024
------------------------------------*/

#include <stdio.h>

int main(void) {

double numMiles;
double numGasPrice;
double numGasPerMile;
double numTotalPerMile20;
double numTotalPerMile75;
double numTotalPerMile500;


//promts user to enter floating point values for miles/gallon and price per gallon
scanf("%lf %lf\n", &numMiles, &numGasPrice); 

//calculates the user inputs by dividing them and outputs the per-mile cost
numGasPerMile = numMiles / numGasPrice;


//calculates and prints the gas-cost at different miles 
numTotalPerMile20 = (20 / numGasPerMile);
numTotalPerMile75 = (75 / numGasPerMile);
numTotalPerMile500 = (500 / numGasPerMile);
printf("%0.2lf %0.2lf %0.2lf\n", numTotalPerMile20, numTotalPerMile75, numTotalPerMile500); 

   return 0;
}
