#include <iostream>
#include <string>
#include <ctime>

const std::string strings[15] = {
	"75",
	"9564",
	"174782",
	"18358710",
	"2004824765",
	"190123750334",
	"88027773076367",
	"9965042806167092",
	"414126568340807033",
	"41487233473237169429",
	"5371446525439152975114",
	"701133287773177839681757",
	"91715238171491435850272948",
	"6366046889536730731669874031",
	"046298272309709873933853600423"
};

int strLen[15] = {
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2
};

int main()
{
	int start_s = clock();

	int strLen = 2;

	int* sums = (int*)malloc(15* sizeof(int));
	for (int j = 0; j < 15; ++j)
	{
		sums[j] = std::stoi(strings[14].substr(2 * j, 2 * sizeof(char)));

	}

	for (int i = 13; i >= 0; --i)
	{
		int count = strings[i].length() / strLen;
		int* newSums = (int*)malloc(count * sizeof(int));
		for (int j = 0; j < count; ++j)
		{
			newSums[j] = std::stoi(strings[i].substr(2 * j, 2 * sizeof(char)));
			if (sums[j] > sums[j + 1])
				newSums[j] += sums[j];
			else
				newSums[j] += sums[j + 1];
		}
		sums = newSums;
	}
	std::cout << sums[0] << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}