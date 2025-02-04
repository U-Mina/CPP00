/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:09:44 by ewu               #+#    #+#             */
/*   Updated: 2025/02/04 10:25:55 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>

class PhoneBook
{
private:
	Contact contacts[8]; /*fixed array of 8 contact*/
	int index; /*keep track of contact, and to replace oldest if > 8*/
	int total; /*total number of contact, to decide replace or add*/
public:
	PhoneBook(); /*constructor, easy for deconstructor later*/
	void addContact();
	void displayContace();
	void searchContact(); /*functions will be declared outside class*/
		
};

#endif