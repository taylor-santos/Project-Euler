#include <iostream>

int main()
{
	int a = 1, b = 2, sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		int c = a;
		a = b;
		b += c;
	}
	std::cout << sum;
	while (1);
}