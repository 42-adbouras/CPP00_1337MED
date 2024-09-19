/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:04:26 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/18 23:26:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i, j;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
                std::cout << (char)toupper(av[i][j++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
