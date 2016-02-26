#include <iostream>
#include <string>
#include <ctime>

bool isPermutation(int n)
{
	int digits[10];
	for (int i = 0; i < 10; ++i)
	{
		digits[i] = n % 10;
		n /= 10;
	}
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i + 1; j < 10; ++j)
		{
			if (digits[i] == digits[j])
				return false;
		}
	}
	return true;
}

int main()
{
	int start_s = clock();

	int digits[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int num = 1; num < 1000000; ++num)
	{
		
		int rightMostMin = 8;
		while (digits[rightMostMin] > digits[rightMostMin + 1] && rightMostMin > 0)
		{
			rightMostMin--;
		}
		int ceil = rightMostMin + 1;
		for (int i = rightMostMin + 1; i < 10; ++i)
		{
			if (digits[i] > digits[rightMostMin] && digits[i] < digits[ceil])
			{
				ceil = i;
			}
		}
		int n = digits[rightMostMin];
		digits[rightMostMin] = digits[ceil];
		digits[ceil] = n;
		for (int j = rightMostMin + 1; j < 9; ++j)
		{
			for (int i = rightMostMin + 1; i < 9; ++i)
			{
				if (digits[i] > digits[i + 1])
				{
					int swap = digits[i];
					digits[i] = digits[i + 1];
					digits[i + 1] = swap;
				}
			}
		}
		
	}

	for (int i = 0; i < 10; ++i)
	{
		std::cout << digits[i];
	}
	std::cout << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}