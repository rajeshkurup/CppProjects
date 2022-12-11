#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
	std::cout << "Largest Palindrome of product of two xxx digit numbers" << std::endl;
	int num_digits = 0;
	
	while(true)
	{
		std::cout << "Enter number of digits between 2 and 3: ";
		std::cin >> num_digits;
		if(num_digits >= 2 && num_digits <= 3)
		{
			break;
		}
	}

	int largest_num = pow(10, num_digits) - 1;
	std::cout << "Largest Number: " << largest_num << std::endl;

	int largest_product = 0;
	for(int i = largest_num; i > 1; --i)
	{
		for(int j = largest_num; j > 1; --j)
		{
			int product = i * j;
			
			char str_product[20];
			sprintf(str_product, "%d", product);
			int len = strlen(str_product);

			char str_product_rev[20];
			int m = 0;
			for(int k = len - 1; k >= 0; --k, ++m)
			{
				str_product_rev[m] = str_product[k];
			}

			str_product_rev[m] = '\0';

			if(strcmp(str_product, str_product_rev) == 0)
			{
				if(largest_product < product)
				{
					largest_product = product;
				}

				break;
			}
		}
	}

	std::cout << "Largest Product = " << largest_product << std::endl;

	return 0;
}

