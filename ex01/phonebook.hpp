/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:18:55 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/21 19:28:21 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

typedef std::string str;

class Contact
{
private:
	str		first_name;
	str		last_name;
	str		nickname;
	str		phone_num;
	str		secret;
public:
    void    set_info(str info, str value);
    str     get_info(str info);
};

class PhoneBook
{
private:
	Contact	contact[8];
public:
    void    set_contact(int index, Contact contact);
    Contact get_contact(int index);
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
