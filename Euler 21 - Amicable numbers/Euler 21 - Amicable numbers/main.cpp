#include <iostream>
#include <string>
#include <ctime>

int sumOfDivisors(int n)
{
	int sqrtN = sqrt(n);
	int sum = 1;
	for (int i = 2; i < sqrtN; ++i)
	{
		if (n%i == 0)
		{
			sum += i;
			sum += n / i;
		}
	}
	if (n%sqrtN == 0)
	{
		sum += sqrtN;
	}
	return sum;
}

int main()
{
	int start_s = clock();

	int sum = 0;
	for (int i = 2; i < 10000; ++i)
	{
		int d = sumOfDivisors(i);
		if (d > i)
		{
			if (sumOfDivisors(d) == i)
			{
				sum += i + d;
			}
		}
	}

	std::cout << sum << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}