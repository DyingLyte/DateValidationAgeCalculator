#include <iostream>
#include <cmath>

int month{};
int day{};
int year{};


void validDate()
{
	
	std::cin >> month;
	std::cin.ignore();
	std::cin >> day;
	std::cin >> year;

	if (1900 <= year <= 2025)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (day > 31 || day < 1)
			{
				std::cout << "That is not a valid date\n";
			}
		}
		else if (month == 2)
		{
			if (year % 4 == 0)
			{
				if (day > 29 || day < 1)
				{
					std::cout << "That is not a valid date\n";
				}
			}
			else if (year % 4 != 0)
			{
				if (day > 28 || day < 1)
				{
					std::cout << "That is not a valid date\n";
				}
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30 || day < 1)
			{
				std::cout << "That is not a valid date\n";
			}
		}
		else
		{
			std::cout << "That is not a valid date \n";
		}
	}
	else
	{
		std::cout << "That is not a valid date \n";
	}
}