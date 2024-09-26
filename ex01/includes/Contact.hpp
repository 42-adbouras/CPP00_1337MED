/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 18:23:45 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

typedef std::string str;

class Contact
{
public:
    void    set_info(str info, str value);
    str     get_info(str info);
private:
	str		first_name;
	str		last_name;
	str		nickname;
	str		phone_num;
	str		secret;
};
