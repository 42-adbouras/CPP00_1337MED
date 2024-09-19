/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:18:55 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/19 11:41:40 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

typedef std::string str;

class Contact
{
	public:
		str	first_name;
		str	last_name;
		str	nickname;
		str	phone_num;
		str	secret;
	Contact() {}
	Contact(str first_name, str last_name, str nickname, str phone_num, str secret)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
		this->phone_num = phone_num;
		this->secret = secret;
	}
};

class PhoneBook
{
	public:
		Contact	contact[9];
};

/***	utils.cpp	*********************************/
str		ft_getline(void);
bool	verify_digits(str index);
str		ft_truncate(str string);
bool	empty_field(Contact	contact);

/***	contact_utils.cpp	************************/
void	ft_instructions(void);
void	add_contact(PhoneBook *contacts);
void	search_contact(PhoneBook *contacts);

/***		***/