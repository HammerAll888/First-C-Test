#include <iostream>
#include <string>

using std::string;

int main()
{
	//std::cout << "Hello, World!";
	//std::cin.get();

	//int menuItem;
	//std::cout << "Enter a menu option (1 to 5): ";
	//std::cin >> menuItem;

	//std::cout << "You selected: " << menuItem << " Menu Item!\n";

	//std::cout << "\x1B[31mName\t|\tAndrew Coppins\n";
	//std::cout << "\x1B[34mDOB\t|\t07 January 2006\n";
	//std::cout << "\x1B[32mCity\t|\tRuse\n\x1B[37m";

	int integer = 50; // int = whole number - MAX 2147483647 MIN -2147483647
	float floatingPoint = 63.4f; // float = decimal number = must have f
	char character = 'g'; // single character on the ascii table - use single quotes for alpha numerical characters
	bool voolean = true; // true or false

	long longNumber = 60; // twice the size of an integer
	short shortNumber = 1; // half the size of an integer

	string myString = "banana";

	if (shortNumber == 1)
	{
		// the condition was true, so I can run this code
		shortNumber = shortNumber - 1;
	}
	else if (shortNumber > 5)
	{
		shortNumber = 5;
	}
	else
	{
		shortNumber = 1;
	}

	//Nested if statement
	if (integer == 50)
	{
		if (longNumber == 60)
		{
			//This means both are true
		}

		//This section of code will run even if long number is not 60
	}

	//Logical AND statement
	if (integer == 50 && longNumber == 60)
	{
		//Both must be true for this to happen
	}

	//Logical OR statement
	if (integer == 50 || longNumber == 61)
	{
		//This still runs if long number is not 61, but integer is 60
	}

	//Logical NOT statement
	if (integer != 50)
	{
		//Integer has to be anything but 50 to run this code
	}

	//longnumber != 60
	if (!(longNumber == 60))
	{

	}

	if (longNumber == 50)
	{
		std::cout << "Longer number is 50!\n";
	}

	if (longNumber == 51)
	{
		std::cout << "Longer number is 51!\n";
	}

	if (longNumber == 52)
	{
		std::cout << "Longer number is 52!\n";
	}
	else
	{
		std::cout << "Longer number is outside the expected valies!\n";
	}

	switch (longNumber)
	{
	case 50:
		std::cout << "Longer number is 50!\n";
		break;
	case 51:
		std::cout << "Longer number is 51!\n";
		break;
	case 52:
		std::cout << "Longer number is 52!\n";
		break;
	default: //Do this by default if no other cases were true
		std::cout << "Number is outside the expected values!\n";
	}

	for (int i = 0; i < 50; ++i)
	{
		std::cout << "Number is: " << i << std::endl;
	}

	bool isAtFifty = false;
	int i = 0;

	while (!isAtFifty)
	{
		std::cout << "Number in while loop is: " << i << std::endl;

		i++;

		if (i == 50)
		{
			isAtFifty = true;
		}
	}

	return 0;
}