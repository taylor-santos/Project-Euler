#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int start_s = clock();

	int digits[1000];
	int prevDigits[1000];
	for (int i = 0; i < 1000; ++i) { digits[i] = 0; prevDigits[i] = 0; }

	prevDigits[999] = 1;
	digits[999] = 1;
	int index = 2;
	while (digits[0] == 0)
	{
		/*bool firstDigit = false;
		for (int i = 0; i < 1000; ++i)
		{
			if (digits[i] != 0)
				firstDigit = true;
			if (firstDigit)
				std::cout << digits[i];
		}
		std::cout << std::endl;*/
		for (int i = 999; i >= 0; i--)
		{
			int prevDigit = digits[i];
			digits[i] += prevDigits[i];
			prevDigits[i] = prevDigit;
			if (i<999)
				if (digits[i + 1] > 9)
				{
					digits[i] += digits[i + 1] / 10;
					digits[i + 1] = digits[i + 1] % 10;
				}
		}
		index++;
	}
	std::cout << index << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}