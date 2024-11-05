#include "PhoneBook.hpp"

int main()
{
	PhoneBook	PhoneBook;
	int			i;

	i = 0;
	while(1)
	{
		int command = 0;

		i %= 8;
		std::cout << "Enter Command >> 1.ADD, 2.SEARCH, 3.EXIT" << std::endl;
		std::cin >> command;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		if(std::cin.eof() == 1) {break;}
		if(command == 1)
		{
			PhoneBook.ADD(i);
			i++;
		}
		else if(command == 2)
		{
			PhoneBook.SEARCH();
		}
		else if(command == 3)
		{
			std::cout << "Exit PhomeBook" << std::endl;
			break;
		}
		else
		{
			std::cout << "Error input" << std::endl;
		}
	}
	return (0);
}