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
	Contact contact;//instance of Contact class
	std::string cmd;
	
	while (1)
	{
		std::cout << "Enter your instruction: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			
		}
		else if (cmd == "SEARCH")
		{
			
		}
		else if (cmd == "EXIT")
		{
			
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	}
}


/**
 * create Phonebook object;
 * loop: -add or -search(display) or (exit=break loop)
 * addContact() method(function):
 * 	- prompt for input(inc names, number etc..)
 * 	- read input: non-empty, non-skip
 * 	- create new Contact object, set fields(assign value to attributes), add to PhoneBook
 */

