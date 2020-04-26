// EulerP2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// Find sum of even valued terms for terms that don't exceed 4 million
// Fibonacci Numbers

int main()
{
	// first num
	int n1 = 1;
	// second num
	int n2 = 2;
	// temp num
	int num = 0;
	// final answer/sum of even numbered terms
	int sum =0;
	// checks all fib numbers under 4million
	while(n2 < 4000000){
		// find sum of terms
		num = (n1 + n2);
		// set n1 to n2
		n1 = n2;
		// set n2 to sum of previous terms
		n2 = num;
		//  checks if each term is even, starts with 2nd term
		if ( ((n1 % 2) == 0)) {
			sum += n1;
		}
	}
	std::cout << sum << std::endl;
    return 0;
}

