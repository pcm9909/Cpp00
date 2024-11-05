#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact;

	public:
		void ft_cin(std::string &s);
		void ADD(int i);
		void SEARCH();
};

#endif