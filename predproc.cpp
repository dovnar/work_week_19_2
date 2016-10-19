#include <iostream>

//#define MAX_FLOAT_FN
//#define MAX_INT_FN

#ifdef MAX_FLOAT_FN
	float max(float a, float b)
	{
#pragma message("FLOAT MAX")
		if (a > b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
#else
#	ifdef MAX_INT_FN
#pragma message("INT MAX")
		int max(int a, int b)
		{
			if (a > b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
#	endif
#endif

void main()
{
#ifdef MAX_FLOAT_FN
	float a = 5.6;
	float b = 6.5;
	std::cout << "max float: " << max(a, b) << std::endl;
#else
#	ifdef MAX_INT_FN
	int a = 5;
	int b = 6;
	std::cout << "max int: " << max(a, b) << std::endl;
#	else
	std::cout << "not selected constant";
#	endif
#endif
}
