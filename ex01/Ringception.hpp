/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ringception.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:59:43 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 12:32:26 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RINGSEPTION_HPP
# define RINGSEPTION_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "PhoneBook.hpp"
# include "Contact.hpp"

typedef std::string str;

/***	utils.cpp	*********************************/
str		ft_getline(void);
bool	verify_digits(str index);
str		ft_truncate(str string);
bool	empty_field(Contact	contact);

/***	contact_utils.cpp	************************/
void	ft_instructions(void);
void	add_contact(PhoneBook *contacts);
void	search_contact(PhoneBook *contacts);

#endif