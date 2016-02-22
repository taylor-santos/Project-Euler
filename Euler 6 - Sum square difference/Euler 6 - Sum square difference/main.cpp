#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	int sum = 0;
	int sumOfSquares = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum += i;
		sumOfSquares += i*i;
	}
	sum *= sum;
	std::cout << sum - sumOfSquares << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}