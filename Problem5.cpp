// Jay Vyas
// Nov 18, 2015
// Project Euler - Solution to Problem 5

/*
Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>
#include <limits>

//Method used to locate the lowest number that can be divided by all numbers from 1-20 without decimal places (evenly divisible)
int calculate_ans(){
	double i;
	double x;
	
	//keeps incrementing a number up until the highest value possible (your choice what that is)
	for (x = 20; x < std::numeric_limits<int>::max(); x++){
		//within loop, checks if the number is divisible by every number from 1-20, 
		//if not, exit loop otherwise if last value divided is 20, you've found the number!
		for (i = 1; i < 21; i++){	
			if ((x / i - (int)(x / i)) != 0){
				break;
			}
			else if (i == 20){
				return x;
			}
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 5\n");
	if (argc != 1){
		puts("Error, no parameters required\n");
		return 0;
	}
	try{
		std::cout << "\nSmallest positive number evenly divisible by all numbers from 1 to 20 is:\n" << calculate_ans() << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}