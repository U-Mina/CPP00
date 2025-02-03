/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:54:23 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 14:40:03 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

/**
anything that will always be used inside a class is private
first name, last name, nickname, number, drakest screct
*/
class Contact
{
private: /*variables should not be acceesed*/
	std::string secret;
	std::string first_n;
	std::string last_n;
	std::string nick_n;
	int phone_nbr;	
public: /*define method(function) inside Contact class*/
	Contact(); /*constructor, will be called auto when obj created*/
	void setContact();
	void getContact() const; /*the output is read_only*/
};

#endif