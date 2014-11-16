// Jay Vyas
// Nov 15, 2015
// Project Euler - Solution to Problem 3

/*
Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>

//calculates the prime factors of any number entered into argument
//returns the largest prime number that factors into argument
int calculate_ans(double num1){
	int GCD = 1;
	int i = 1;
	__int64 value = (__int64)num1;

	//using property of prime factorization in order to break (divide) input to find all factors quickly
	while (value > 1){
		if (value%i == 0){
			//std::cout << i << "   "; -- this statement will print out ALL the prime factors
			value = value / i;
			if (GCD < i){
				GCD = i;
			}
		}
		i++;
	}
	return GCD;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 3\n");
	if (argc != 2){
		puts("Error, one parameter required\n");
		return 0;
	}

	std::cout << "\nLargest prime factor of " << argv[1] << " is " << calculate_ans(atof(argv[1])) << "\n";
	return 0;

}