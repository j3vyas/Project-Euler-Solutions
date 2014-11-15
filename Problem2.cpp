// Jay Vyas
// Nov 15, 2015
// Project Euler - Solution to Problem 2

/*
Even Fibonacci numbers
Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>

//Global variables used for recursion
int final_ans = 2;	//needs to start at 2 because 1 and 2 are not included in the sum but 2 is even valued
int temp_val = 0;

//recursive function - calls itself with the next 2 elements in the fibonacci sequence
//checks to make sure elements dont go over 4M and add if element is even valued
int calculate_ans(int num1, int num2){
	temp_val = num1 + num2;
	
	if (temp_val >= 4000000)
	{
		return final_ans;
	}
	if (temp_val % 2 == 0)
	{
		final_ans = final_ans + temp_val;
	}
	//when recursively calling, always passing in the second parameter passed into function and new calculated (added) value
	calculate_ans(num2, temp_val);
	return final_ans;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 2\n");
	if (argc != 1){
		puts("Error, no parameters required\n");
		return 0;
	}
	std::cout << "Total sum equals to: " << calculate_ans(1,2) << "\n";
	return 0;
}