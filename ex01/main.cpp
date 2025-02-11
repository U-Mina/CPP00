/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:21:41 by ewu               #+#    #+#             */
/*   Updated: 2025/02/11 11:00:22 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

/*normaly, const & passing the ref to avoid uncessary copy to enhance efficiency,
for non primitive data type, its good habit*/
std::string readInput(const std::string &promtp)
{
	std::string input;
	while (1)
	{
		std::cout << promtp << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() == true)//ctrl+d case
			exit(0);
		if (input.empty() == false)
			break ;
		std::cout << "Invalid input! Try again." << std::endl;
	}
	return input;
}

int main()
{
	PhoneBook phonebook; //phonebook is an instance of PhoneBook class
	std::string cmd;
	
	while (1)
	{
		std::cout << "Enter your instruction: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof() == true)//ctrl+d case
			break;
		//std::cin >> cmd;
		if (cmd == "ADD")
		{
			Contact singleContact;//create instance of Contact class
			singleContact.setFirst(readInput("Enter first name: "));
			singleContact.setLast(readInput("Enter last name: "));
			singleContact.setNick(readInput("Nickname is: "));
			try
			{
				singleContact.setNumber(readInput("Phone number is: "));
			}
			catch(const std::invalid_argument& e)//in getNum, invalid_arg error has been thrown!
			{
				std::cout << "Error: " << e.what() << "Try again!" << '\n';
				continue ;
			}
			singleContact.setSecret(readInput("Darkest secret is: "));
			phonebook.addContact(singleContact);			
		}
//try-catch() is necessary, otherwise: terminating with uncaught exception of type std::invalid_argument: stoi: no conversion
		else if (cmd == "SEARCH") 
		{
			phonebook.printContacts();
			int total = phonebook.gettotal();
			if (total == 0)
			{
				std::cout << "Empty Phonebook!" << std::endl;
				continue ;//should break or waiting for new cmd such as ADD?
			}
			std::string inputIndex;
			std::cout << "Enter the index you want to search: " << std::endl;
			std::cin >> inputIndex;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//discard invalid input
				std::cout << "Invalid input! Please try again." << std::endl;
				continue ;
			}
			std::cin.ignore();//clean input buffer
			if (std::cin.eof())//ctrl+d case
				break;
			try
			{
				int searchIndex = std::stoi(inputIndex);
				if (searchIndex < 0 || searchIndex >= total)
					std::cout << "Invalid index!" << std::endl;
				else
				{
					Contact person = phonebook.searchContact(searchIndex);
					std::cout << "First Name: " << person.getFirst() << std::endl;
					std::cout << "Last Name: " << person.getLast() << std::endl;
					std::cout << "Nick Name: " << person.getNick() << std::endl;
					std::cout << "Phone Number: " << person.getNumber() << std::endl;
					std::cout << "Darkest Secret: " << person.getSecret() << std::endl;
				}
			}
			catch(...)//to catch all exception
			{
				std::cout << "Invalid Index!" << "\n";
			}
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return 0;
}

			// }
			// int maxIndex;
			// if (total < 8)
			// 	maxIndex = total - 1;
			// else
			// 	maxIndex = 7;

/**
 * create Phonebook object;
 * loop: -add or -search(display) or (exit=break loop)
 * addContact() method(function):
 * 	- prompt for input(inc names, number etc..)
 * 	- read input: non-empty, non-skip
 * 	- create new Contact object, set fields(assign value to attributes), add to PhoneBook
 */

