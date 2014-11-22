// Jay Vyas
// Nov 22, 2014
// Project Euler - Solution to Problem 9

/*
Special Pythagorean triplet
Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include "stdafx.h"
#include <iostream>   
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
#include <string>
#include <limits>

//not optimized code
//Hard search through all values of a,b,c with c increasing first, then b, then a to get sum of 1000 but satisfy Pythagorean Theorm.
int calculate_ans(){
	
	int a;
	int b;
	int c;

	for (a = 1; a < 1000; a++){
		for (b = 1; b < 1000; b++){
			for (c = 1; c < 1000; c++){
				if ((a*a + b*b) == c*c){
					if ((a + b + c) == 1000){
						std::cout << "Value of a, b, c are:  " << a << ", " << b << ", " << c;
						return a*b*c;
					}
				}
			}
		}
	}
	return 0;

}

int main(int argc, char *argv[])
{
	puts("\nProject Euler - Problem 9\n");
	if (argc != 1){
		puts("Error, zero parameters required\n");
		return 0;
	}
	try{
		std::cout << "\nProduct of abc is:  " << calculate_ans() << "\n";
	}
	catch (int e){
		std::cout << "An exception occured: " << e << "\n";
	}
	return 0;

}