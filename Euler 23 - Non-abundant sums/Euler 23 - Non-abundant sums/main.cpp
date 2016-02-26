#include <iostream>
#include <string>
#include <ctime>

int sumOfDivisors(int n)
{
	if (n <= 1)
		return 0;
	int sqrtN = ceil(sqrt(n));
	int sum = 1;
	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
		{
			sum += i;
			//sum += n / i;
		}
	}
	return sum;
}

bool isAbundant(int n)
{
	return (sumOfDivisors(n) > n);
}

int main()
{
	int start_s = clock();

	const int count = 28123;
	bool abundant[count];
	
	for (int i = 0; i < count; ++i)
	{
		abundant[i] = isAbundant(i);
	}

	bool madeOfAbundant[count];
	for (int i = 0; i < count; ++i) { madeOfAbundant[i] = false; }

	for (int i = 0; i <= count/2; ++i)
	{
		if (abundant[i])
		{
			for (int j = i; j <= count; ++j)
			{
				if (madeOfAbundant[i + j] == false)
				{
					if (abundant[j])
					{
						madeOfAbundant[i + j] = true;
						//std::cout << i + j << std::endl;
					}
				}
				if (i + j > count)
				{
					break;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		if (madeOfAbundant[i] == false)
		{
			//std::cout << i << std::endl;
			sum += i;
		}
	}
	
	std::cout << sum << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}