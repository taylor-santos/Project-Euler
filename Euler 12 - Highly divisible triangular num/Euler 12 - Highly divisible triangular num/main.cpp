#include <iostream>
#include <ctime>


int numDivisors(long long int n)
{
	int num = 0;
	int sqroot = sqrt(n);
	for (int i = 1; i <= sqroot; ++i)
	{
		if (n%i == 0)
			num+=2;
	}
	return num;
}

int main()
{
	int start_s = clock();
	long long int num = 1;
	long long int i = 2;
	int divisors = 0;
	int max = 0;
	int maxN = 1;
	while (divisors <= 500)
	{
		divisors = numDivisors(num);
		if (divisors > max)
		{
			max = divisors;
			maxN = num;
			//std::cout << num << " has " << divisors << " divisors." << std::endl;
		}
		num += i;
		i++;
	}
	std::cout << maxN << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}