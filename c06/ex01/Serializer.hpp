/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:45:46 by user              #+#    #+#             */
/*   Updated: 2025/06/02 10:28:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& src);
		Serializer& operator=(const Serializer& hrc);
		~Serializer();

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
