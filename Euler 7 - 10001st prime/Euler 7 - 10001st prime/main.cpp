#include <iostream>

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int count = 0;
	int n = 1;
	while (count < 10001)
	{
		n++;
		if (isPrime(n))
		{
			count++;
		}
	}
	std::cout << n;
	while (1);
}