/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:18:55 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 12:40:13 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "Ringception.hpp"
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
public:
	void	set_contact(int index, Contact contact);
	Contact	get_contact(int index);
};

#endif
