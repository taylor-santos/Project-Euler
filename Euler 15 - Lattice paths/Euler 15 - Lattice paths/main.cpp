#include <iostream>
#include <ctime>

int main()
{
	int start_s = clock();
	long long int prevRow[21];
	long long int currRow[21];
	currRow[0] = 1;
	for (int i = 0; i < 21; ++i) { prevRow[i] = 1; }
	for (int y = 0; y < 20; ++y)
	{
		for (int x = 1; x < 21; ++x)
		{
			currRow[x] = currRow[x - 1] + prevRow[x];
		}
		for (int x = 0; x < 21; ++x) { prevRow[x] = currRow[x]; }
	}
	std::cout << currRow[20] << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}