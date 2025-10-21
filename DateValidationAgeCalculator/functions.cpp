#include <iostream>
#include <cmath>

int Bmonth{};
int Bday{};
int Byear{};

int currentMonth{};
int currentDay{};
int currentYear{};


void validDate()
{
	bool invalidBday = true;
	bool invalidCurrentDay = true;
	while (invalidBday)
	{
		std::cout << "\nEnter your birthday (Month first, then Day, then Year)\n";
		std::cin >> Bmonth;
		std::cin.ignore();
		std::cin >> Bday;
		std::cin >> Byear;

		if (1900 <= Byear <= 2025)
		{
			if (Bmonth == 1 || Bmonth == 3 || Bmonth == 5 || Bmonth == 7 || Bmonth == 8 || Bmonth == 10 || Bmonth == 12)
			{
				if (Bday > 31 || Bday < 1)
				{
					std::cout << "That is not a valid date\n";
					
				}
				else
				{
					invalidBday = false;
				}
			}
			else if (Bmonth == 2)
			{
				if (Byear % 4 == 0)
				{
					if (Bday > 29 || Bday < 1)
					{
						std::cout << "That is not a valid date\n";
					}
					else
					{
						invalidBday = false;
					}
				}
				else if (Byear % 4 != 0)
				{
					if (Bday > 28 || Bday < 1)
					{
						std::cout << "That is not a valid date\n";
					}
					else
					{
						invalidBday = false;
					}
				}
			}
			else if (Bmonth == 4 || Bmonth == 6 || Bmonth == 9 || Bmonth == 11)
			{
				if (Bday > 30 || Bday < 1)
				{
					std::cout << "That is not a valid date\n";
				}
				else
				{
					invalidBday = false;
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
	while (invalidCurrentDay)
	{
		std::cout << "\nEnter the current date (Month first, then Day, then Year)\n";
		std::cin >> currentMonth;
		std::cin.ignore();
		std::cin >> currentDay;
		std::cin >> currentYear;

		if (1900 <= currentYear <= 2025)
		{
			if (currentMonth == 1 || currentMonth == 3 || currentMonth == 5 || currentMonth == 7 || currentMonth == 8 || currentMonth == 10 || currentMonth == 12)
			{
				if (currentDay > 31 || currentDay < 1)
				{
					std::cout << "That is not a valid date\n";

				}
				else
				{
					invalidCurrentDay = false;
				}
			}
			else if (currentMonth == 2)
			{
				if (currentYear % 4 == 0)
				{
					if (currentDay > 29 || currentDay < 1)
					{
						std::cout << "That is not a valid date\n";
					}
					else
					{
						invalidCurrentDay = false;
					}
				}
				else if (currentYear % 4 != 0)
				{
					if (currentDay > 28 || currentDay < 1)
					{
						std::cout << "That is not a valid date\n";
					}
					else
					{
						invalidCurrentDay = false;
					}
				}
			}
			else if (currentMonth == 4 || currentMonth == 6 || currentMonth == 9 || currentMonth == 11)
			{
				if (currentDay > 30 || currentDay < 1)
				{
					std::cout << "That is not a valid date\n";
				}
				else
				{
					invalidCurrentDay = false;
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
}

void ageCalculator()
{
	int age = currentYear - Byear;

	if (currentMonth == Bmonth && currentDay <= Bday)
	{
		age--;
	}
	else if (currentMonth < Bmonth)
	{
		age--;
	}
	std::cout << "\nYour age is:  " << age << "\n";
	if (Bmonth == 2 && Bday == 29)
	{
		std::cout << "Thats rough buddy... your age is actually:   " << age / 4 << "\n";
	}
}