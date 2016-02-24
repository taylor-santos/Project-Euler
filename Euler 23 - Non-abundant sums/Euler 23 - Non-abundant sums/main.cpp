#include <iostream>
#include <string>
#include <ctime>

int sumOfDivisors(int n)
{
	if (n <= 1)
		return 0;
	int sqrtN = ceil(sqrt(n));
	int sum = 1;
	for (int i = 2; i < sqrtN; ++i)
	{
		if (n%i == 0)
		{
			sum += i;
			sum += n / i;
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

	int sum = 0;

	for (int n = 1; n < count; ++n)
	{
		bool isSum = false;
		for (int i = 0; i <= n/2 && isSum == false; ++i)
		{
			if (abundant[i] && abundant[n-i])
			{
				isSum = true;
				std::cout << n << " : " << i << "+" << n-i << std::endl;
			}
		}
		if (isSum == true)
		{
			//std::cout << n << std::endl;
			sum += n;
		}
	}
	
	std::cout << sum << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}