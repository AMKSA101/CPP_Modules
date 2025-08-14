/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:13:23 by user              #+#    #+#             */
/*   Updated: 2025/08/14 11:06:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
