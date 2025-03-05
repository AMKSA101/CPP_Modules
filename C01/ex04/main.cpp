/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:43:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 12:46:32 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedV2.hpp"
#include <fcntl.h>

int main(int ac, char **av){
	if (ac != 4){
		std::cerr <<RED<<BOLD<< "Usage:/ ./sedV2 <filename> <string to replace> <string to replace with>" << std::endl;
		return 1;
	}
	else{
		sedV2 sed(av[2], av[3]);
		std::string filename(av[1]);
		sed.replace(filename);
	}
}
