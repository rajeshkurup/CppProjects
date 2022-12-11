#include <iostream>

int main()
{
	std::cout << "Match Difference" << std::endl;
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

	int match_difference = 0;

	while(true)
	{
		std::cout << "Enter match difference between 1 and 1000000: ";
		std::cin >> match_difference;
		if(match_difference >= 1 && match_difference <= 1000000)
		{
			break;
		}
	}

	// get integers
	int* int_arr = new int[number_of_integers];
	for(int i = 0; i < number_of_integers; ++i)
	{
		std::cout << "Enter integer: ";
		std::cin >> int_arr[i];	
	}

	// sort
	for(int i = 0; i < number_of_integers-1; ++i)
	{
		for(int j = i+1; j < number_of_integers; ++j)
		{
			if(int_arr[i] < int_arr[j])
			{
				int temp = int_arr[i];
				int_arr[i] = int_arr[j];
				int_arr[j] = temp;
			}
		}
	}

	// print
	for(int i = 0; i < number_of_integers; ++i)
	{
		std::cout << int_arr[i] << std::endl;
	}

	// count match difference
	int count = 0;
	for(int i = 0; i < number_of_integers-1; ++i)
	{
		for(int j = i+1; j < number_of_integers; ++j)
		{
			if(int_arr[i] - int_arr[j] == match_difference)
			{
				++count;
				std::cout << "Match Found! Number1=" << int_arr[i] << " and Number2=" << int_arr[j] << std::endl;
			}
		}
	}

	std::cout << "Number of Match Found=" << count << std::endl;

	delete[] int_arr;

	return 0;
}

