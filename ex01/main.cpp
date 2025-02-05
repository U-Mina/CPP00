/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:21:41 by ewu               #+#    #+#             */
/*   Updated: 2025/02/04 15:15:16 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*normaly, const & passing the ref to avoid uncessary copy to enhance efficiency,
for non primitive data type, its good habit*/
std::string readInput(const std::string &promtp)
{
	std::string input;
	while (1)
	{
		std::cout << promtp << std::endl;
		std::getline(std::cin, input);
		if (input != "null")
		// if (input.empty() == false)
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
		//std::cin >> cmd;
		if (cmd == "ADD")
		{
			Contact singleContact;//create instance of Contact class
			singleContact.setFirst(readInput("Enter first name: "));
			singleContact.setLast(readInput("Enter last name: "));
			singleContact.setNick(readInput("Nickname is: "));
			singleContact.setNumber(readInput("Phone number is: "));
			singleContact.setSecret(readInput("Darkest secret is: "));
			phonebook.addContact(singleContact);			
		}
		else if (cmd == "SEARCH") //is try-catch() needed to catch exception such as non-numeric input??
		{
			int total;
			phonebook.printContacts();
			total = phonebook.getTotalNbr();
			if (total == 0)
			{
				std::cout << "Empty Phonebook!" << std::endl;
				continue ;//should break or waiting for new cmd such as ADD?
			std::string inputIndex;
			std::cout << "Enter the index you want to search: " << std::endl;
			std::cin >> inputIndex;
			int searchIndex = std::stoi(inputIndex);
			if (searchIndex < 0 || searchIndex >= total)
				std::cout << "Invalid index!" <<std::endl;
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
		else if (cmd == "EXIT")
			exit(0);
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

