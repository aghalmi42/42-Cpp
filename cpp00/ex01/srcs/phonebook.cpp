/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:48:44 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/11 22:48:37 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

PhoneBook::PhoneBook() : nbrContact(0), nextContact(0)
{
}

bool validStr(const std::string& str, bool alphaNum)
{
    if (str.empty())
        return (false);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (alphaNum && !std::isalpha(str[i]))
            return (false);
        if (!alphaNum && !std::isdigit(str[i]))
            return (false);
        }
    return (true);
}

void PhoneBook::addContact(Contact contact)
{
    if (!validStr(contact.getFirstName(), true)
        || !validStr(contact.getLastName(), true)
        || !validStr(contact.getNickName(), true)
        || !validStr(contact.getPhoneNumber(), false))
    {
        std::cout << "Error : invalid data for contact" << std::endl;
        return ;
    }
    numberContact[nextContact] = contact;
    nextContact = (nextContact + 1) % 8;
    if (nbrContact < 8)
        nbrContact++;
}

void PhoneBook::displayContact()
{
    std::string text;

    std::cout << "| index | first name | last name | nickname" << std::endl;
    for (int i = 0; i < nbrContact; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        
        text = numberContact[i].getFirstName();
        if (text.length() > 10)
            text = text.substr(0, 9) + '.';
        std::cout << '|' << std::setw(10) << text;
        
        text = numberContact[i].getLastName();
        if (text.length() > 10)
            text = text.substr(0, 9) + '.';
        std::cout << '|' << std::setw(10) << text;
        
        text = numberContact[i].getNickName();
        if (text.length() > 10)
            text = text.substr(0, 9) + '.';
        std::cout << '|' << std::setw(10) << text;

        std::cout << std::endl;
    }
}

void PhoneBook::displayDetailContact(int index)
{
    std::string text;
    
    if (index < 0 || index >= nbrContact)
        std::cout << "Error: index invalid" << std::endl;
    else
    {
        text = numberContact[index].getFirstName();
        std::cout << text << std::endl;
        
        text = numberContact[index].getLastName();
        std::cout << text << std::endl;
        
        text = numberContact[index].getNickName();
        std::cout << text << std::endl;
        
        text = numberContact[index].getPhoneNumber();
        std::cout << text << std::endl;

        text = numberContact[index].getDarkestSecret();
        std::cout << text << std::endl;
    }
}