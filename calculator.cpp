#include "calculator.h"

//Addition operation
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

//Subtraction operation
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//Multiplication operation
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

//Division operation
int Calculator::Mul (double a, double b)
{
    return a / b + 0.5;
}
