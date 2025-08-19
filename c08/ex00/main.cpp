/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:06:41 by user              #+#    #+#             */
/*   Updated: 2025/08/19 12:36:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
	std::vector<int> v1 = {1, 2, 3, 4, 5};
	std::vector<int>::iterator it = easyfind(v1, 1);
	std::cout << *it << std::endl;
}
