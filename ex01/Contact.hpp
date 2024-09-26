/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/26 12:15:51 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Ringception.hpp"

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

#endif
