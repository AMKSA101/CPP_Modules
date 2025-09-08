/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:56:55 by user              #+#    #+#             */
/*   Updated: 2025/08/25 11:45:04 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <sys/time.h>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <deque>

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int> deq;
	double vectorTime;
	double dequeTime;
	void sortWithVector();
	void sortWithDeque();
	void binaryInsertDeque(std::deque<int> &arr, int value, int maxPos);
	void insertRemainingDeque(std::deque<int> &result, std::vector<std::pair<int, int> > &pairs, int unpaired);
	void mergeInsertSortDeque(std::deque<int> &arr);
	bool isValidInput(const std::string &str) const;
	double getCurrentTime() const;
	int getJacobsthal(int n);
	void binaryInsert(std::vector<int> &arr, int value, int maxPos);
	void insertRemaining(std::vector<int> &result, std::vector<std::pair<int, int> >& pairs, int unpaired);
	void mergeInsertSort(std::vector<int> &arr);

public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &other);

	void parseInput(int ac, char **av);
	void sort();
	void displayBefore() const;
	void displayAfter();
	void displayTiming();
};

#endif
