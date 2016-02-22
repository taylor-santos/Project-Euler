#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	int val = 20;
	bool divisible = false;
	while (!divisible)
	{
		divisible = true;
		for (int i = 2; i <= 20; ++i)
		{
			if (val % i != 0)
			{
				divisible = false;
				break;
			}
		}
		if (!divisible)
			val++;
	}
	std::cout << val << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}