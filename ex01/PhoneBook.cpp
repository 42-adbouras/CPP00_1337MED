/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:44:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 17:38:43 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PhoneBook.hpp"

void	PhoneBook::set_contact(int index, Contact contact)
{
	this->contact[index] = contact;
}

Contact	PhoneBook::get_contact(int index)
{
	return (this->contact[index]);
}
