// Jay Vyas
// Nov 14, 2015
// Project Euler - Solution to Problem 1

/*
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>


int calculate_ans(int num1, int num2){
	int i;
	int final_value = 0;
	for (i = 0; i < 1000; i++){
		if ((i % num1 == 0) || (i % num2 == 0)){
			final_value = final_value + i;
		}
	}
	return final_value;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 1\n");
	if (argc != 3){
		puts("Error, only 2 parameters please parameters\n");
		return 0;
	}
	std::cout << "Total sum equals to: " << calculate_ans(atoi(argv[1]), atoi(argv[2])) << "\n";
	return 0;
}

