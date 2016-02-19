#include <iostream>

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
	while (1);
}