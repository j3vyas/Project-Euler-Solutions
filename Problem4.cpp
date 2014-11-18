// Jay Vyas
// Nov 17, 2015
// Project Euler - Solution to Problem 4

/*
Largest palindrome product
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>

//Badly optimized code, Order n^2 time
//Loops through all numbers from 999 to 100 twice to calculate max value
//Easily scalable by replacing hardcoded numbers with variables taken from user input!
int calculate_ans(){
	int num1 = 999;
	int num2 = 999;
	int mulResult = 0;
	char intChar [7];
	int index1;
	int index2;
	int max = 0;

	for (num1 = 999; num1 > 99; num1--){
		for (num2 = 999; num2 > 99; num2--){
			mulResult = num1 * num2;
			_itoa_s(mulResult,intChar,10);
			index1 = 0;
			index2 = (int)strlen(intChar)-1;
			while (index1 < index2){
				if(intChar[index1] != intChar[index2]){
					break;
				}
				else{
					if(index1+1 >= index2-1){
						if (max < mulResult){
							max = mulResult;
						}
					}
				}
				index1++;
				index2--;
			}
		}
	}
	return max;
}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 4\n");
	if (argc != 1){
		puts("Error, no parameters required\n");
		return 0;
	}
	try{
		std::cout << "\nLargest palindrome made from the product of two 3-digit numbers is: " << calculate_ans() << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}


//Alternative Solution I was working on -- IN PROGRESS

	/*
	while ((num1 > 99) || (num2 > 99)){
		mulResult = num1 * num2;
		_itoa_s(mulResult,intChar,10);
		index1 = 0;
		index2 = (int)strlen(intChar)-1;
		while (index1 < index2){
			if(intChar[index1] != intChar[index2]){
				break;
			}
			else{
				if(index1+1 >= index2-1){
					std::cout << num1 << " " << num2 << "\n";
					return mulResult;
				}
			}
			index1++;
			index2--;
		}
		num1--;
		mulResult = num1 * num2;
		_itoa_s(mulResult,intChar,10);
		index1 = 0;
		index2 = (int)strlen(intChar)-1;
		while (index1 < index2){
			if(intChar[index1] != intChar[index2]){
				break;
			}
			else{
				if(index1+1 >= index2-1){
					return mulResult;
				}
			}
			index1++;
			index2--;
		}
		num2--;
	}
	*/