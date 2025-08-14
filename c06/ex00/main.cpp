/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:11:25 by user              #+#    #+#             */
/*   Updated: 2025/05/31 13:13:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Invalid number of arguments!"<< std::endl;
	else
		ScalarConvertor::convert(av[1]);
	return(0);
}
