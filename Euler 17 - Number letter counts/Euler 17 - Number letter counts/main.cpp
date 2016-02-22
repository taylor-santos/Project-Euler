#include <iostream>
#include <string>
#include <ctime>

std::string intToString(int n);
std::string digitToString(int n);
std::string tensToString(int n);

std::string intToString(int n)
{
	std::string str;
	if (n >= 1000)
	{
		str += digitToString((int)floor(n / 1000)) + "Thousand";
		n -= (int)floor(n / 1000) * 1000;
	}
	if (n >= 100)
	{
		str += digitToString((int)floor(n / 100)) + "Hundred";
		n -= (int)floor(n / 100) * 100;
		if (n > 0)
			str += "And";
	}
	str += tensToString(n);	
	return str;
}

std::string digitToString(int n)
{
	switch (n) {
		case 0:
			return "";
		case 1:
			return "one";
		case 2:
			return "two";
		case 3:
			return "three";
		case 4:
			return "four";
		case 5:
			return "five";
		case 6:
			return "six";
		case 7:
			return "seven";
		case 8:
			return "eight";
		case 9:
			return "nine";
		default:
			return "ERROR";
	}
}

std::string tensToString(int n)
{
	if (n >= 0 && n < 10)
	{
		return digitToString(n);
	}
	switch (n)
	{
	case(10) :
		return "ten";
	case(11) :
		return "eleven";
	case(12) :
		return "twelve";
	case(13) :
		return "thirteen";
	case(14) :
		return "fourteen";
	case(15) :
		return "fifteen";
	case(16) :
		return "sixteen";
	case(17) :
		return "seventeen";
	case(18) :
		return "eighteen";
	case(19) :
		return "nineteen";
	default:
		if (n >= 20 && n < 30)
		{
			return "twenty" + digitToString(n - 20);
		}
		if (n >= 30 && n < 40)
		{
			return "thirty" + digitToString(n - 30);
		}
		if (n >= 40 && n < 50)
		{
			return "forty" + digitToString(n - 40);
		}
		if (n >= 50 && n < 60)
		{
			return "fifty" + digitToString(n - 50);
		}
		if (n >= 60 && n < 70)
		{
			return "sixty" + digitToString(n - 60);
		}
		if (n >= 70 && n < 80)
		{
			return "seventy" + digitToString(n - 70);
		}
		if (n >= 80 && n < 90)
		{
			return "eighty" + digitToString(n - 80);
		}
		if (n >= 90 && n < 100)
		{
			return "ninety" + digitToString(n - 90);
		}
		return "ERROR";
	}
}

int main()
{
	int start_s = clock();
	int count = 0;
	for (int i = 1; i <= 1000; ++i)
	{
		std::string str = intToString(i);
		count += str.length();
	}
	std::cout << count << std::endl;
	int stop_s = clock();
	std::cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;
	while (1);
}