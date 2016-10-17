#include <iostream>
using namespace std;

typedef unsigned long Ulong;

Ulong maximum(Ulong number1, Ulong number2);


void main()
{
	Ulong number1 = 5153135;
	Ulong number2 = 1358643;
	Ulong result = maximum(number1, number2);
	cout << "maximum namber = " << result << endl;
}

Ulong maximum(Ulong number1, Ulong number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}
