/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:54:23 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 10:38:49 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

/**
anything that will always be used inside a class is private
first name, last name, nickname, number, drakest screct
*/
/*privete: variables should not be acceesed*/
class Contact
{
private:
	std::string darkSecret;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;	
/*define method(function) inside Contact class*/
public:
	/*constructor, will be called auto when obj created*/
	Contact();
	
	/*setter for the var in Contact class*/
	/*const: ft will not modify passed para; &: pass as reference, not copy*/
	/*reference is passed to avoid unnecessary copy of data*/
	void setFirst(const std::string &firstname);
	void setLast(const std::string &lastname);
	void setNick(const std::string &nickname);
	void setNumber(const std::string &num);
	void setSecret(const std::string &secrt);
	
	/*getters to get info*/
	/*ret type is const refrence(&) to std::string, not a copy*/
	/*2nd const: this ft doesnt modify any attributes(var) of OBJECT*/
	/*namely, getFirst() is read-only, on contrast setFirst() modify vars*/
	const std::string &getFirst() const;
	const std::string &getLast() const;
	const std::string &getNick() const;
	const std::string &getSecret() const;
	const std::string &getNumber() const;
};

#endif

/**
 * NOTE: different ways to set field
 * 1. the one i used here: set every field seperatelt, not very efficient, but required by subject
 * 2. set all in one setter ft: void setContact(const std::string firstname, ... const std::string darkSecret)
 * 3. use constructor to set: 
 * 		Contact(const std::string firstname, ... const std::string darkSecret)
 * 		{ method inside } (constructor is the same name with class)
 */