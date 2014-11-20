// Jay Vyas
// Nov 19, 2014
// Project Euler - Solution to Problem 6

/*
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>
#include <limits>

int calculate_ans(int x){
	double sum_square = 0;
	double square_sum = 0;
	int i;
	for (i = 0; i < x+1; i++){
		square_sum = square_sum + i;
		sum_square = sum_square + i*i;
	}
	square_sum = square_sum * square_sum;
	return square_sum - sum_square;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 6\n");
	if (argc != 2){
		puts("Error, one parameters required\n");
		return 0;
	}
	try{
		std::cout << "\nDifference between square of sums and sum of squares is:\n" << calculate_ans(atoi(argv[1])) << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}