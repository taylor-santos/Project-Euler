#include <iostream>

int main()
{
	int sum = 0;
	int sumOfSquares = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum += i;
		sumOfSquares += i*i;
	}
	sum *= sum;
	std::cout << sum - sumOfSquares;
	while (1);
}