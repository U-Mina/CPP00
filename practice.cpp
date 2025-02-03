/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:19:01 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 11:30:49 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

string input;

int main()
{
	cout << "this is wiith namespace std::cout\n";
	cout << "input some sentences\n";
	getline(cin, input);
	cout << "is this what you typed:" << input << endl;
	return 0;
}
