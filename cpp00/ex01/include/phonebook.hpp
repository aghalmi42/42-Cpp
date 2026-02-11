/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:41:32 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/11 01:03:44 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "../include/contact.hpp"

class PhoneBook
{
    private:
    Contact numberContact[8];
    int nbrContact;
    int nextContact; 
    
    public:
    PhoneBook();
    void addContact(Contact);
    void displayContact();
    void displayDetailContact(int index);
};

#endif