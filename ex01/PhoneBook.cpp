/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:03:20 by ewu               #+#    #+#             */
/*   Updated: 2025/02/04 14:46:53 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*define constructor for PhoneBook class*/
/* init curIndex and total, when this PhoneBook object is created
	it statrs with: curIndex = 0 → the first available position in the contacts array
	contactCount = 0 → The phonebook is empty */
PhoneBook::PhoneBook() : curIndex(0), total(0) {}

void PhoneBook::addContact(const Contact &person)
{
	if (total < 8) //new contact can be added
	{
		//contacts[8] declared in hpp
		contacts[curIndex] = person;
		//update index, bounded 0 - 7
		//used to overwrite oldest one if exceed 8 contacts
		curIndex = (curIndex + 1) % 8;
		total++;
	}
	else
	{
		contacts[curIndex] = person;
		curIndex = (curIndex + 1) % 8;
	}
}

//print table of 4 columns of contacts
void PhoneBook::printContacts() const
{
	int i;
	int realIndex;
	
	if (total == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return ;
	}
	//every column is 10 chars wide
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (i = 0; i < total; ++i)//++i more general used in cpp
	{
		if (total < 8)
			realIndex = i;
		else
			realIndex = (curIndex + i) % 8;
		const Contact &per = contacts[realIndex];
		//this std::string firstName is a local copy
		std::string firstName = per.getFirst().substr(0, 10);
		//if firstName is not private, can use per.firstName.length() directly
		if (per.getFirst().length() > 10)
		{
			firstName[9] = '.';//if>10, the last one will be '.'
			firstName = firstName.substr(0, 10);//substr(index, len)
		}
		std::string lastName = per.getLast().substr(0, 10);
		if (per.getLast().length() > 10)
		{
			lastName[9] = '.';
			lastName = lastName.substr(0, 10);
		}
		std::string nickName = per.getNick().substr(0, 10);
		if (per.getNick().length() > 10)
		{
			nickName[9] = '.';
			nickName = nickName.substr(0, 10);
		}
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << firstName << " | "
				<< std::setw(10) << lastName << " | "
				<< std::setw(10) << nickName << std::endl;
	}
}

//search specific index of contact
Contact PhoneBook::searchContact(int displayIndex) const
{
	if (total < 8)
		return contacts[displayIndex];
	else
		return contacts[(curIndex + displayIndex) % 8];
}

int PhoneBook::gettotal() const
{
	return total;
}

/**
CLASS: blueprint for creating object
	- include what functions and varibles needed to create Obejct
	- user defined data type
CLASSMEMBER: attribute and method
	CLASS: car
	OBJECT: a specific car, such as: Audi, Toyota
	ATTRIBUTER: (feactures) (VARIABLE:)
		*color, weigt, appearance of THIS CAR/object (data member)
		such as: int nbr; string mystring;
	METHOD: (how to use the car/OBJECT): (FUNCTION:)
		+ drive, brake (stop)
	CONSTRUCTORS:
		a special method (function) automatically called
		when a object of a class is created
		same name of class with parenthess(), no return type
		INITIALIZES: the object
	EXAMPLE:
		class MyClass {        
		public:              
			void myMethod() {  // Method
				std::cout << "Hello World!" << std::endl;
			}
		};
		int main() {
			MyClass myObj;     
			myObj.myMethod();  // Calls the method manually
			return 0;
		}
		AND:
		class MyClass {     
		public:           
			MyClass() {    // Constructor
				std::cout << "Hello World!" << std::endl;
			}
		};
		int main() {
			MyClass myObj;  // Calls the constructor automatically
			return 0;
		}
 */