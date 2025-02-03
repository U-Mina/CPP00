/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:19:01 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 11:49:04 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	string output;
	int i;
	cout << "what is your input?" << endl;
	getline(cin, input);
	if (input == "null")
	{
		cout << "* LOUD AND UNVEARABLE FEEDBACK NOISE *" << "\n";
	}
	else
	{
		for (i = 0; input[i]; i++)
			output[i] += toupper(input[i]);
		cout << output << endl;
	}
	return 0;
}
