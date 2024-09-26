/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:23:23 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 17:46:10 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Ringception.hpp"

str	ft_getline(void)
{
	str	temp;
	std::getline(std::cin, temp);
	return (temp);
}

bool	empty_field(Contact	contact)
{
	if (contact.get_info("first").empty())
		return (std::cout << "Empty field detected [First Name]!" << std::endl, true);
	if (contact.get_info("last").empty())
		return (std::cout << "Empty field detected [Last Name]!" << std::endl, true);
	if (contact.get_info("nick").empty())
		return (std::cout << "Empty field detected [Nick Name]!" << std::endl, true);
	if (contact.get_info("phone").empty())
		return (std::cout << "Empty field detected [Phone Number]!" << std::endl, true);
	if (contact.get_info("secret").empty())
		return (std::cout << "Empty field detected [Darkest secret]!" << std::endl, true);
	return (false);
}

bool	verify_digits(str index)
{
	int	i;

 	i = -1;
	while (index[++i])
	{
		if (!(index[i] >= '0' && index[i] <= '8'))
		{
			std::cout << "[Irrelevant Index]" << std::endl;
			return (false);
		}
	}
	return (true);
}

str		ft_truncate(str string)
{
	if (string.length() > 10)
		return (string.substr(0, 9) + ".");
	return (string);
}
