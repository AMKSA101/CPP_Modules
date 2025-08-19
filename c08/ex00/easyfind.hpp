/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:04:44 by user              #+#    #+#             */
/*   Updated: 2025/08/19 12:36:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

# include <algorithm>
# include <stdexcept>
# include <iostream>
# include <iterator>
# include <string>

template <typename T>
typename T::iterator easyfind(T& container, int index) {
	auto iter = std::find(container.begin(), container.end(), index);
	
	if ( iter != container.end())
		return iter;
	else
		throw()
}


#endif
