#include <iostream>

using namespace std;

bool is_power_of_two(unsigned long number)
{
	int count = 0;
	for(int i = 0; i < 64; ++i)
	{
		if(number & 0x01) 
		{
			++count;
			if(count > 1)
			{
				return false;
			}
		}
        
		number >>= 1;
	}
    
	return true;
}

unsigned long find_largest_power(unsigned long number) 
{
	unsigned long pos = 0x8000000000000000;
	for(int i = 0; i < 64; ++i) 
	{
		if(number & pos) 
		{
			return pos;
		}
        
		pos >>= 1;
	}
    
	return 0;
}

int main() 
{
	int test_cases = 0;
	cin >> test_cases;

	for(int i = 0; i < test_cases; ++i) 
	{
		int turn = 0;
		unsigned long counter = 0;
		cin >> counter;

		while(counter > 1) 
		{
			turn ^= 0x01;
			
			if(is_power_of_two(counter)) 
			{
				counter -= (counter / 2);
			} 
			else 
			{
				counter -= find_largest_power(counter);
			}
		}
        
		cout << (turn == 1 ? "Louise" : "Richard");
	}

	return 0;
}
