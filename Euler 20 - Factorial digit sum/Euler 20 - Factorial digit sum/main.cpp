#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int start_s = clock();

	int digits[158];

	for (int i = 0; i < 158; ++i)
	{
		digits[i] = 0;
	}
	digits[2] = 1;

	for (int i = 99; i >= 2; --i)
	{
		digits[0] *= i;
		for (int j = 1; j < 158; ++j)
		{
			digits[j] *= i;
			digits[j] += floor(digits[j - 1] / 10);
			digits[j - 1] = digits[j - 1] % 10;
		}
	}
	int sum = 0;
	for (int i = 157; i >= 0; --i)
	{
		sum += digits[i];
	}

	std::cout << sum << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}