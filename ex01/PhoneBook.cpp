#include "PhoneBook.hpp"
#include <cstdlib>

void PhoneBook::ft_cin(std::string &s)
{
	std::getline(std::cin, s, '\n');
	if(std::cin.eof() == 1) {exit(1);}
}

void PhoneBook::ADD(int i)
{

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;

	while(firstName.empty())
	{
		std::cout << "Enter FirstName >> ";
		ft_cin(firstName);
		contact.SetFirstName(firstName, i);
	}

	while(lastName.empty())
	{
		std::cout << "Enter LastName >> ";
		ft_cin(lastName);
		contact.SetLastName(lastName, i);
	}
	while(nickName.empty())
	{
		std::cout << "Enter Nickname >> ";
		ft_cin(nickName);
		contact.SetNickname(nickName, i);
	}
	while(phoneNumber.empty())
	{
		std::cout << "Enter PhoneNumber >> ";
		ft_cin(phoneNumber);
		contact.SetPhoneNumber(phoneNumber, i);
	}
}

void PrintSearch(char firstchar, std::string str, char fillchar)
{
	if(str.length() > 10)
	{
		std::cout << firstchar << std::setw(9) << std::right << str.substr(0,9) << ".";
	}
	else
	{
		std::cout << firstchar << std::setw(10) << std::right << std::setfill(fillchar) << str;
	}
}

void PhoneBook::SEARCH()
{
	int i = 0;
	int inputval = 0;

	for(i = 0; i < 4; i++)
	{
		PrintSearch(' ',"_",'_');
	}
	std::cout << "\n";
	PrintSearch('|',"idx",' ');
	PrintSearch('|',"Firstname",' ');
	PrintSearch('|',"Lastname",' ');
	PrintSearch('|',"Nickname",' ');
	std::cout << "|" << std::endl;

	for(i = 0; i < 4; i++)
	{
		PrintSearch('|',"_",'_');
	}
	std::cout << "|" << std::endl;

	i = 0;
	while(i < 8)
	{
		std::cout << "|" << std::setw(10) << std::right << std::setfill('.') << i + 1;
		PrintSearch('|', contact.GetFirstName(i), '.');
		PrintSearch('|', contact.GetLastName(i), '.');
		PrintSearch('|', contact.GetNickname(i), '.');

		std::cout << "|" << std::endl;
		i++;
	}

	for(i = 0; i < 4; i++)
	{
		PrintSearch('|',"_",'_');
	}

	std::cout << "|" << std::endl;
	std::cout << "idx >> " ;
	std::cin >> inputval;
	if(std::cin.eof() == 1) {exit(1);}
	std::cin.clear();
	std::cin.ignore(100, '\n');
	if(inputval >= 1 && inputval <= 8)
	{
		std::cout << "Number is : " << contact.GetPhoneNumber(inputval - 1) << std::endl;
	}
	else
	{
		std::cout << "Invalid Input val" << std::endl;
	}
}