// Jay Vyas
// Nov 23, 2014
// Project Euler - Solution to Problem 10

/*
Summation of primes
Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

//#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>
#include <limits>

//badly optimized code
//adds all prime numbers under 2 M
__int64 calculate_ans(){
	
	__int64 max_limit = 2000000;
	__int64 sum = 5;
	__int64 i;
	__int64 j;

	for (i = 3; i < max_limit; i += 2){
		for (int j = 3; j < i; j += 2){
			if ((i%j) == 0){
				break;
			}
			else if (j+2 >= i){
				std::cout << i << "  ";
				sum += i;
			}
		}
		
	}
	return sum;

}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 10\n");
	if (argc != 1){
		puts("Error, zero parameters required\n");
		return 0;
	}
	try{
		std::cout << "\nSum of prime numbers below two million: " << calculate_ans() << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}