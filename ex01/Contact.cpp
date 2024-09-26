/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:48:55 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 17:39:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Contact.hpp"

void	Contact::set_info(str info, str value)
{
	if (info == "first")
		first_name = value;
	else if (info == "last")
		last_name = value;
	else if (info == "nick")
		nickname = value;
	else if (info == "phone")
		phone_num = value;
	else if (info == "secret")
		secret = value;
}

str	Contact::get_info(str info)
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
