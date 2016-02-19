#include <iostream>

int main()
{
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
	std::cout << val;
	while (1);
}