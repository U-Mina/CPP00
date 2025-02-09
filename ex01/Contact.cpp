/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:21:44 by ewu               #+#    #+#             */
/*   Updated: 2025/02/09 11:28:29 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * Contact:: → The Contact before :: refers to the class.
 * Contact() → The Contact() after :: refers to the constructor of that class.
 * Contact (before ::) → Specifies that this ft belongs to the Contact class.
 * Second Contact() → Defines the constructor function.
 */
//define an empty ({} is empty) constructor for Contact class
Contact::Contact(){}

//idea: Contact:: indicate the following ft belongs to this class
void Contact::setFirst(const std::string &firstname){ firstName = firstname; }
void Contact::setLast(const std::string &lastname){ lastName = lastname; }
void Contact::setNick(const std::string &nickname){ nickName = nickname; }
void Contact::setNumber(const std::string &num)
{
	for (int i = 0; i < num.length(); ++i)
	{
		if (std::isdigit(num[i]) == false)
		{
			// std::cout << "Invalid Phone Number!" << std::endl;
			// break;
			throw std::invalid_argument("Invalid Phone Number!");
		}
	}
	phoneNum = num;
}
void Contact::setSecret(const std::string &secrt){ darkSecret = secrt; }

const std::string &Contact::getFirst() const { return firstName; }
const std::string &Contact::getLast() const { return lastName; }
const std::string &Contact::getNick() const { return nickName; }
const std::string &Contact::getSecret() const { return darkSecret; }
const std::string &Contact::getNumber() const { return phoneNum; }
