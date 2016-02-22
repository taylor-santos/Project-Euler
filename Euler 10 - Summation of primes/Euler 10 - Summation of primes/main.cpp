#include <iostream>
#include <ctime>

bool isPrime(long int n)
{
	if (n == 1)
		return false;
	for (long int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int start_s = clock();
	long long int sum = 2;
	for (long int i = 3; i < 2000000; i += 2)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	std::cout << sum << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while(1);
}