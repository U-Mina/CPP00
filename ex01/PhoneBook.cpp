/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:03:20 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 13:46:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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