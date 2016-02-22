#include <iostream>
#include <ctime>

bool isPrime(long long int x)
{
	for (long long int i = 2; i < (x / 2); ++i)
	{
		if (x%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int start_s = clock();
	long long int val = 600851475143;
	for (long long int i = 2; i < val / 2; ++i)
	{
		if (val%i == 0)
		{
			if (isPrime(val / i))
			{
				std::cout << val / i << std::endl;
				break;
			}
		}
	}
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}