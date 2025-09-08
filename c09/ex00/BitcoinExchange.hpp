/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:56:34 by user              #+#    #+#             */
/*   Updated: 2025/08/21 18:32:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, double> data;
		void laodDatabase();
	public:
		BitcoinExchange()
		~BitcoinExchange();

		void parseInputFile(int fd);
		double bce_calcul(double db, double indb);
};
#endif
