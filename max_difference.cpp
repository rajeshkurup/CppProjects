#include <iostream>

int main()
{
	std::cout << "Max Difference" << std::endl;
	int number_of_integers = 0;
	
	while(true)
	{
		std::cout << "Enter number of integers between 1 and 10: ";
		std::cin >> number_of_integers;
		if(number_of_integers >= 1 && number_of_integers <= 10)
		{
			break;
		}
	}

	int* int_arr = new int[number_of_integers];
	for(int i = 0; i < number_of_integers; ++i)
	{
		std::cout << "Enter integer: ";
		std::cin >> int_arr[i];	
	}

	int max_int = int_arr[0];
	int max_int_pos = -1;
	for(int i = 1; i < number_of_integers; ++i)
	{
		if(max_int < int_arr[i])
		{
			max_int = int_arr[i];
			max_int_pos = i;
		}
	}

	int min_int = int_arr[0];
	int min_int_pos = -1;
	for(int i = 0; i < max_int_pos; ++i)
	{
		if(min_int > int_arr[i])
		{
			min_int = int_arr[i];
			min_int_pos = i;
		}
	}

	int difference = 0;
	if(max_int_pos > -1 && max_int_pos > -1)
	{
		difference = max_int - min_int;
		std::cout << "Difference = " << difference << std::endl;
	}
	else
	{
		std::cout << "Unable to find difference" << std::endl;
	}

	delete[] int_arr;

	return 0;
}

