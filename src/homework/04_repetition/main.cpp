//write include statements
#include"repetition.h"
#include<iostream>
#include<string>

//write using statements

using std::cout; using std::cin;

int main() 
{
	int x = 0;
	do
	{
		cout <<  "1 - Factorial\n" << "2 - Greatest Common Divisor\n" << "3 - Exit";
	} while (x < 3);

	if (x=3)
		cout << "Are you sure you want to exit?";

	return 0;
}