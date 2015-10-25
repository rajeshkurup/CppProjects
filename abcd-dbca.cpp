#include <iostream>
#include <string.h>

int main()
{
	std::cout << "ABCD * X = DCBA where X > 1 and X < 10" << std::endl;

	int X = 0;
	while(true)
	{
		std::cout << "Enter Multiplier between 2 and 9: ";
		std::cin >> X;
		if(X > 1 && X < 10)
		{
			break;
		}
	}

	bool equation_found = false;
	for(int num1 = 9999; num1 > 0; --num1)
	{
		char str_num1[5];
		char str_num2[5];
		char str_num1_rev[5];
		int num2 = num1 / X;
		sprintf(str_num1, "%d", num1);
		sprintf(str_num2, "%d", num2);
		int idx_rev = 0;
		for(int idx = 3; idx >= 0; --idx)
		{
			str_num1_rev[idx_rev] = str_num1[idx];
			++idx_rev;
		}

		str_num1_rev[idx_rev] = '\0';
		if(strcmp(str_num1_rev, str_num2) == 0)
		{
			std::cout << num2 << " * " << X << " = " << num1 << std::endl;
			equation_found = true;
			break;
		}
	}

	if(!equation_found)
	{
		std::cout << "No equation found!" << std::endl;
	}

	return 0;
}
