/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:45:57 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/11 04:01:42 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

std::string getInput(const std::string& text)
{
    std::string str;
    std::cout << text;
    std::getline(std::cin, str);
    while(str.empty())
    {
        std::cout << "Input is empty, try again !" << std::endl;
        std::getline(std::cin, str);
    }
    return (str);
}

int main()
{
    PhoneBook phoneBook;
    std::string cmd;
    
    while(1)
    {
        std::cout << "Enter command --> ADD or SEARCH or EXIT :" << std::endl;
        std::cin >> cmd;
        std::cin.ignore();
        if (!std::cin)
            return (0);
        if (cmd == "ADD")
        {
            Contact newContact;
            newContact.setFirstName(getInput("FirstName : "));            
            newContact.setLastName(getInput("LastName : "));
            newContact.setNickName(getInput("NickName : "));
            newContact.setPhoneNumber(getInput("PhoneNumber : "));
            newContact.setDarkestSecret(getInput("DarkestSecret : "));
            phoneBook.addContact(newContact);
        }
        if (cmd == "SEARCH")
        {
            int index = 0;
            phoneBook.displayContact();
            std::cin >> index;
            phoneBook.displayDetailContact(index);
        }
        if (cmd == "EXIT")
            return (0);
    }
    return (0);
}