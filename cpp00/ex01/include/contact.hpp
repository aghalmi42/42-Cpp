/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:14:01 by aghalmi           #+#    #+#             */
/*   Updated: 2026/02/10 01:03:17 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    
    public:
    void setFirstName(const std::string& value);
    void setLastName(const std::string& value); 
    void setNickName(const std::string& value);
    void setPhoneNumber(const std::string& value);
    void setDarkestSecret(const std::string& value);

    const std::string& getFirstName() const;
    const std::string& getLastName() const; 
    const std::string& getNickName() const;
    const std::string& getPhoneNumber() const;
    const std::string& getDarkestSecret() const;
};


#endif