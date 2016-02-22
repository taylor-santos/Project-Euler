#include <iostream>
#include <ctime>
int main()
{
	int start_s = clock();
	int sum = 0;
	for (int i = 1; i < 1000; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	std::cout << sum << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}