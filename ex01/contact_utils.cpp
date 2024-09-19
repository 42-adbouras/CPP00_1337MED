/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:36:08 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/19 11:45:53 by adbouras         ###   ########.fr       */
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

	std::cout << "First Name : ";
	temp.first_name = ft_getline();
	std::cout << "\nLast Name : ";
	temp.last_name = ft_getline();
	std::cout << "\nNick Name : ";
	temp.nickname = ft_getline();
	std::cout << "\nPhone Number : ";
	temp.phone_num = ft_getline();
	std::cout << "\nDarkest secret : ";
	temp.secret = ft_getline();
	if (empty_field(temp))
	{
		std::cout << "Contact was not added!" << std::endl;
		return ;
	}
	contacts->contact[i] = temp;
	if (i < 7)
		i++;
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
		temp = contacts.contact[i];
		if (temp.first_name.empty())
			break ;
		std::cout << "| " << std::left << std::setw(6) << i + 1;
		std::cout << "| " << std::left << std::setw(11) << ft_truncate(temp.first_name);
		std::cout << "| " << std::left << std::setw(10) << ft_truncate(temp.last_name);
		std::cout << "| " << std::left << std::setw(10) << ft_truncate(temp.nickname);
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
	if (i > 8 || contacts.contact[i - 1].first_name.empty())
	{
		std::cout << "[Irrelevant Index]" << std::endl;
		return ;
	}
	std::cout << "First Name : " << contacts.contact[i - 1].first_name << std::endl;
	std::cout << "Last Name : " << contacts.contact[i - 1].last_name << std::endl;
	std::cout << "Nick Name : " << contacts.contact[i - 1].nickname << std::endl;
	std::cout << "Phone Number : " << contacts.contact[i - 1].phone_num << std::endl;
	std::cout << "Darkest secret : " << contacts.contact[i - 1].secret << std::endl;
}

void	search_contact(PhoneBook *contacts)
{
	str	index;

	display_all_contacts(*contacts);
	std::cout << "\nSelect a contact Index for more details, or [0] to go back.\n> ";
	std::getline(std::cin, index);
	display_contact(*contacts, index);
}
