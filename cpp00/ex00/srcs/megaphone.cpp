/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:32:48 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/09 20:07:02 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
        {
            j = 0;
            std::string str = av[i];
            while (j < str.length())
            {
                str[j] = std::toupper(str[j]);
                j++;
            }
            std::cout << str;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}

