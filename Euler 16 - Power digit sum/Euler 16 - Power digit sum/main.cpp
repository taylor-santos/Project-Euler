#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	int digits[302];
	for (int i = 0; i < 302; ++i) { digits[i] = 0; }
	digits[0] = 1;
	for (int i = 0; i < 1000; ++i)
	{
		for (int n = 0; n < 302; ++n)
		{
			digits[n] *= 2;
			if (n > 0)
			{
				if (digits[n - 1] > 9)
				{
					digits[n - 1] -= 10;
					digits[n]++;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 302; i++)
	{
		sum += digits[i];
	}
	std::cout << sum << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}