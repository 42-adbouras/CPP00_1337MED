/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:36:08 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/22 10:50:26 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_instructions(void)
{
	std::cout << "\nCommands: \n\t[ADD] : to save a new contact." << std::endl;
	std::cout << "\t[SEARCH] : to display a specific contact." << std::endl;
	std::cout << "\t[EXIT] : to exit." << std::endl;
	std::cout << "> ";
}

void	add_contact(PhoneBook *contacts)
{
	Contact		temp;
	static int	i;

	std::cout << "\nFirst Name : ";
	temp.set_info("first", ft_getline());
	std::cout << "\nLast Name : ";
	temp.set_info("last", ft_getline());
	std::cout << "\nNick Name : ";
	temp.set_info("nick", ft_getline());
	std::cout << "\nPhone Number : ";
	temp.set_info("phone", ft_getline());
	std::cout << "\nDarkest secret : ";
	temp.set_info("secret", ft_getline());
	if (empty_field(temp))
	{
		std::cout << "Contact was not added!" << std::endl;
		return ;
	}
	contacts->set_contact(i, temp);
	i++;
	if (i > 7)
		i = 0;
}

static void	display_all_contacts(PhoneBook contacts)
{
	Contact temp;
	int		i;
	
	i = 0;
	std::cout << " ____________________________________________ " << std::endl;
	std::cout << "| Index | First Name | Last Name | Nick Name |" << std::endl;
	std::cout << "|_______|____________|___________|___________|" << std::endl;
	while (i < 8)
	{
		temp = contacts.get_contact(i);
		if (temp.get_info("first").empty())
			break ;
		std::cout << "| " << std::left << std::setw(6) << i + 1;
		std::cout << "| " << std::left << std::setw(11) << ft_truncate(temp.get_info("first"));
		std::cout << "| " << std::left << std::setw(10) << ft_truncate(temp.get_info("last"));
		std::cout << "| " << std::left << std::setw(10) << ft_truncate(temp.get_info("nick"));
		std::cout << "|" << std::endl;
		std::cout << "|_______|____________|___________|___________|" << std::endl;
		i++;
	}
}

static void	display_contact(PhoneBook contacts, str index)
{
	int	i;

	if (index.empty() || !verify_digits(index))
		return ;
	i = std::stoi(index);
	if (!i)
		return ;
	if (i > 8 || contacts.get_contact(i - 1).get_info("first").empty())
	{
		std::cout << "[Irrelevant Index]" << std::endl;
		return ;
	}
	std::cout << "First Name : " << contacts.get_contact(i - 1).get_info("first") << std::endl;
	std::cout << "Last Name : " << contacts.get_contact(i - 1).get_info("last") << std::endl;
	std::cout << "Nick Name : " << contacts.get_contact(i - 1).get_info("nick") << std::endl;
	std::cout << "Phone Number : " << contacts.get_contact(i - 1).get_info("phone") << std::endl;
	std::cout << "Darkest secret : " << contacts.get_contact(i - 1).get_info("secret") << std::endl;
}

void	search_contact(PhoneBook *contacts)
{
	str	index;

	display_all_contacts(*contacts);
	std::cout << "\nSelect a contact Index for more details, or [0] to go back.\n> ";
	std::getline(std::cin, index);
	display_contact(*contacts, index);
}
