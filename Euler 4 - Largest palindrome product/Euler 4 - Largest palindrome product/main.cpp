#include <iostream>
#include <string>
#include <ctime>

bool isPalindrome(std::string str, int index)
{
	int oppositeIndex = str.length() - index - 1;
	if (oppositeIndex < index)
		return true;
	if (str[index] == str[oppositeIndex])
	{
		return isPalindrome(str, index + 1);
	}
	else return false;
}

int main()
{
	int start_s = clock();
	int max = 0;
	for (int a = 999; a > 0; a--)
	{
		for (int b = 999; b > 0; b--)
		{
			if (a*b > max)
			{
				if (isPalindrome(std::to_string(a*b), 0))
				{
					max = a*b;
				}
			}
		}
	}
	std::cout << max << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}