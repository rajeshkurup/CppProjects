#include <iostream>

int main()
{
	std::cout << "Draw Staircase" << std::endl;
	int height = 0;
	
	while(true)
	{
		std::cout << "Enter height between 1 and 100: ";
		std::cin >> height;
		if(height >= 1 && height <= 100)
		{
			break;
		}
	}

	int limit1 = height - 1;
	for(int i = 0; i < height; ++i)
	{
		for(int j = 0; j < limit1; ++j)
		{
			std::cout << " ";
		}

		int limit2 = height - limit1;
		for(int k = 0; k < limit2; ++k)
		{
			std::cout << "#";
		}

		std::cout << std::endl;
		--limit1;
	}

	return 0;
}

