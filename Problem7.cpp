// Jay Vyas
// Nov 20, 2015
// Project Euler - Solution to Problem 7

/*
10001st prime
Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>
#include <limits>

//Calculates the 10 001st prime number
//Optimized to skip every even number, and when counting up skips every even number to save extra CPU computations
int calculate_ans(){
	int prime_num = 2;
	int num_of_prime = 2;
	double i;
	double j;

	for (i = 5; i < std::numeric_limits<int>::max(); i = i + 2){
		for (j = 3; j < i; j = j + 2){
			if (((i/j) - (int)(i/j)) == 0){
				break;
			}
			else if (j+2 == i) {
				num_of_prime++;
				if (num_of_prime == 10001){
					prime_num = i;
					return prime_num;
				}
			}

		}
	}
	return 0;

}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 7\n");
	if (argc != 1){
		puts("Error, zero parameters required\n");
		return 0;
	}
	try{
		std::cout << "\n10 001st prime number is:\n" << calculate_ans() << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}