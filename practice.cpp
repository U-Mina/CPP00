/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:19:01 by ewu               #+#    #+#             */
/*   Updated: 2025/02/03 12:03:36 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// int main(int ac, char **av)
// {
// 	string input;
// 	string output;
// 	int i;
// 	cout << "what is your input?" << endl;
// 	getline(cin, input);
// 	if (ac == 1)
// 	{
// 		cout << "* LOUD AND UNVEARABLE FEEDBACK NOISE *" << "\n";
// 		return 0;
// 	}
// 	for (i = 1; i < ac; i++)
// 	{
// 		for (int j = 0; av[i][j]; j++)
// 			cout << (char)toupper(av[i][j]);
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// string input;
// string output;
// int i;

// int main()
// {
// 	//cout << "what is your input?" << endl;
// 	getline(cin, input);
// 	if (input == "null")
// 	{
// 		cout << "* LOUD AND UNVEARABLE FEEDBACK NOISE *" << "\n";
// 	}
// 	else
// 	{
// 		i = 0;
// 		while (input[i])
// 		{
// 			output[i] += toupper(input[i]);
// 			i++;
// 		}
// 		cout << output << endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string input;
    string output;  // Empty string, we will append to it

    cout << "What is your input?" << endl;
    getline(cin, input);  // Read user input

    if (input == "null")
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    }
    else
    {
        for (size_t i = 0; i < input.length(); i++)  
        {
            output += toupper(input[i]);  // Append each uppercase character to output
        }
        cout << output << endl;
    }
    return 0;
}
