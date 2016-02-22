#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	int max = 0;
	long int maxN = 0;

	for (long int i = 2; i < 1000000; ++i)
	{
		long long int n = i;
		int length = 0;
		while (n != 1)
		{
			length++;
			if (n % 2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
		}
		if (length > max)
		{
			max = length;
			maxN = i;
		}
	}
	std::cout << maxN << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}