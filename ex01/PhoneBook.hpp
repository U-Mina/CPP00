/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:09:44 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 10:44:09 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8]; /*fixed array of 8 Contact objects*/
	int curIndex; /*keep track of contact, and to replace oldest if > 8*/
	int total; /*total number of contact, to decide replace or add*/
public:
	/* constructor, init a PhoneBook object when created*/
	PhoneBook();
	/* add new contact to phonebook*/
	/* Contact (before &contact): the data type of passed para*/
	/* &contact: take a reference to a Contact object*/
	void addContact(const Contact &person);
	/* print table (4 columns) of all contacts*/
	void printContacts() const;
	/* search a specifit contact object with index and display*/
	/*ret type is Contact (a class is usr-defind data type!)*/
	Contact searchContact(int displayIndex) const;
	int gettotal() const;
};

#endif