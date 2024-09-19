/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:53:37 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/19 12:09:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook	contacts;
	str			line;
	while (1)
	{
		ft_instructions();
		std::getline(std::cin, line);
		if (line.empty())
			break ;
		if (line == "ADD")
			add_contact(&contacts);
		else if (line == "SEARCH")
			search_contact(&contacts);
		else if (line == "EXIT")
			break ;
		line = "";
	}
    return (0);
}
