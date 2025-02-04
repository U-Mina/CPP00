/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:03:20 by ewu               #+#    #+#             */
/*   Updated: 2025/02/04 12:47:36 by ewu              ###   ########.fr       */
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
	//code implement of addcontact behavior
	//do later
}

void PhoneBook::printContacts() const
{
	//print table of 4 columns of contacts
	//do later
}

Contact PhoneBook::searchContact(int displayIndex) const
{
	//search specific index of contact
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