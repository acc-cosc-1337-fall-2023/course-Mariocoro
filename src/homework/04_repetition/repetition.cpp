//add include statements
#include"repetition.h"
#include<string>


using std::cout;

//add function(s) code here


int factorial(int num)
{
    auto sum = 0;

    while(num > 0)
    {
        sum = sum + num * num;
        num = num - 1;
    }

    return sum;
}

int gcd(int num1, int num2)
{
    while(num1 =! num2)
    {
        if (num1 < num2)
            num1 == num2 && num2 == num1;
        if (num1 > num2)
            num1 - num2;
    }

    return num1;
}