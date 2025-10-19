#include <iostream>
#include "functions.h"

int main()
{
	while (true)
	{
		std::cout << "Please enter your birth date in the following format\nmm/dd/yyyy\n";
		validDate();
		std::cout << "Please enter todays date in the same format\n";
		validDate();
	}
}