#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	for (int a = 1; a <= 333; ++a)
	{
		for (int b = 1; b <= 1000 - a; ++b)
		{
			int c = 1000 - a - b;
			if (a*a + b*b == c*c)
				std::cout << a*b*c << std::endl;
		}
	}
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}