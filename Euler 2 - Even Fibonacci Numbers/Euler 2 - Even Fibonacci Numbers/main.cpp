#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	int a = 1, b = 2, sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		int c = a;
		a = b;
		b += c;
	}
	std::cout << sum << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}