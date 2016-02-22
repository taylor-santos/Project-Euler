#include <iostream>
#include <ctime>

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
	int start_s = clock();
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
	std::cout << n << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}