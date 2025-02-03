/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:09:44 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 14:43:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>

class PhoneBook
{
private:
	Contact contacts[8];
	int index;
	int total;
public:
	PhoneBook(); /*constructor, easy for deconstructor later*/
	void addContact();
	void displayContace();
	void searchContact(); /*functions will be declared outside class*/
		
};

#endif