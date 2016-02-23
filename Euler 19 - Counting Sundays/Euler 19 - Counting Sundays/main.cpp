#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int start_s = clock();

	int year = 1900;
	int month = 1;
	int day = 1;
	int weekday = 2;

	int count = 0;

	while (year <= 2000)
	{
		day++;
		weekday++;
		if (weekday > 7)
		{
			weekday = 1;
		}
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month == 2 && day == 30)
		{
			day = 1;
			month++;
		}
		else if (month == 2 && day == 29)
		{
			day = 1;
			month++;
		}
		else if ((month == 9 || month == 4 || month == 6 || month == 11) && day == 31)
		{
			day = 1;
			month++;
		}
		else if (day == 32)
		{
			day = 1;
			month++;
		}

		if (month == 13)
		{
			year++;
			month = 1;
		}

		if (weekday == 1 && day == 1 && year >= 1901)
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}