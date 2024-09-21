/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_get.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:56:41 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/21 19:28:27 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contact::set_info(str info, str value)
{
	if (info == "first")
		this->first_name = value;
	else if (info == "last")
		this->last_name = value;
	else if (info == "nick")
		this->nickname = value;
	else if (info == "phone")
		this->phone_num = value;
	else if (info == "secret")
		this->secret = value;
}

str     Contact::get_info(str info)
{
	if (info == "first")
		return (first_name);
	else if (info == "last")
		return (last_name);
	else if (info == "nick")
		return (nickname);
	else if (info == "phone")
		return (phone_num);
	else if (info == "secret")
		return (secret);
	return ("*** 1337 ***");
}

void	PhoneBook::set_contact(int index, Contact contact)
{
	this->contact[index] = contact;
}

Contact	PhoneBook::get_contact(int index)
{
	return (this->contact[index]);
}
