/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:43:58 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/11 04:15:00 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

void Contact::setFirstName(const std::string& value)
{
    firstName = value;    
}

void Contact::setLastName(const std::string& value)
{
    lastName = value;
}

void Contact::setNickName(const std::string& value)
{
    nickName = value;   
}

void Contact::setPhoneNumber(const std::string& value)
{
    phoneNumber = value;
}

void Contact::setDarkestSecret(const std::string& value)
{
    darkestSecret = value;   
}

const std::string& Contact::getFirstName() const
{
    return (firstName);
}

const std::string& Contact::getLastName() const
{
    return (lastName);
}

const std::string& Contact::getNickName() const
{
    return (nickName);
}

const std::string& Contact::getPhoneNumber() const
{
    return (phoneNumber);   
}

const std::string& Contact::getDarkestSecret() const
{
    return (darkestSecret);
}