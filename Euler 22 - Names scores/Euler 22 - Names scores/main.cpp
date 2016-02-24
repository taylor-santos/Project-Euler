#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>

bool compare_by_word(const std::string& lhs, const std::string& rhs) {
	return lhs < rhs;
}


int main()
{
	int start_s = clock();

	std::ifstream infile("names.txt");
	std::vector<std::string> names;
	std::string name;
	while (infile >> name)
	{
		names.push_back(name);
	}
	
	std::sort(names.begin(), names.end(), compare_by_word);

	long int sum = 0;

	for (int i = 0; i < names.size(); ++i)
	{
		int score = i + 1;
		int val = 0;
		for (char c : names[i])
		{
			val += (int)((char)c - 'A') + 1;
		}
		sum += score * val;
	}
	
	std::cout << sum << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}