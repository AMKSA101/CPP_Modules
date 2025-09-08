/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 10:51:47 by user              #+#    #+#             */
/*   Updated: 2025/08/25 11:45:04 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <limits.h>

PmergeMe::PmergeMe() : vectorTime(0.0), dequeTime(0.0) {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	vec = other.vec;
	deq = other.deq;
	vectorTime = other.vectorTime;
	dequeTime = other.dequeTime;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		vec = other.vec;
		deq = other.deq;
		vectorTime = other.vectorTime;
		dequeTime = other.dequeTime;
	}
	return *this;
}

bool PmergeMe::isValidInput(const std::string &str) const
{
	if (str.empty())
		return false;

	size_t start = 0;
	if (str[0] == '+')
		start = 1;

	if (start >= str.length())
		return false;

	for (size_t i = start; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
			return false;
	}

	if (str.length() > start + 1 && str[start] == '0')
		return false;

	return true;
}

void PmergeMe::parseInput(int ac, char **av)
{
	std::vector<int> temp;

	for (int i = 0; i < ac - 1; ++i)
	{
		std::string arg(av[i]);

		if (!isValidInput(arg))
		{
			throw std::invalid_argument("Error");
		}

		if (arg.length() > 10)
			throw std::invalid_argument("Error");

		int res = atoi(arg.c_str());
		temp.push_back(int(res));
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < temp.size(); i++)
	{
		std::cout << temp[i];
		if (i < temp.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;

	vec = temp;
	deq.assign(temp.begin(), temp.end());
}

double PmergeMe::getCurrentTime() const
{
	struct timeval tv;
	gettimeofday(&tv, NULL);

	return (tv.tv_sec * 1000.0) + (tv.tv_usec / 1000.0);
}

void PmergeMe::displayAfter()
{
	std::cout << "After:  ";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i < vec.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::displayTiming()
{
	std::cout << "Time to process a range of " << vec.size()
			  << " elements with std::vector : " << vectorTime << " ms" << std::endl;
	std::cout << "Time to process a range of " << deq.size()
			  << " elements with std::deque : " << dequeTime << " ms" << std::endl;
}

void PmergeMe::binaryInsert(std::vector<int> &arr, int value, int maxPos)
{
	int left = 0;
	int right = std::min(maxPos, (int)arr.size() - 1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	arr.insert(arr.begin() + left, value);
}

int PmergeMe::getJacobsthal(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return getJacobsthal(n - 1) + 2 * getJacobsthal(n - 2);
}

void PmergeMe::insertRemaining(std::vector<int> &result, std::vector<std::pair<int, int> > &pairs, int unpaired)
{

	std::vector<int> toInsert;

	for (size_t i = 1; i < pairs.size(); ++i)
		toInsert.push_back(pairs[i].second);

	if (unpaired != -1)
		toInsert.push_back(unpaired);

	size_t jacobIdx = 1;
	size_t inserted = 0;

	while (inserted < toInsert.size())
	{
		int jacobNum = getJacobsthal(jacobIdx);

		for (int i = std::min(jacobNum - 1, (int)toInsert.size() - 1); i >= (int)inserted; --i)
		{
			binaryInsert(result, toInsert[i], result.size());
			inserted++;
		}
		jacobIdx++;
	}
}

void PmergeMe::mergeInsertSort(std::vector<int> &arr)
{
	// Base case
	if (arr.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;

	// Form pairs
	for (size_t i = 0; i < arr.size() - 1; i += 2)
	{
		int a = arr[i];
		int b = arr[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(a, b));
		else
			pairs.push_back(std::make_pair(b, a));
	}

	if (arr.size() % 2 == 1)
		unpaired = arr[arr.size() - 1];

	// Extract and recursively sort main chain
	std::vector<int> mainChain;
	for (size_t i = 0; i < pairs.size(); ++i)
		mainChain.push_back(pairs[i].first);

	mergeInsertSort(mainChain); // Recursive call

	// Build result
	std::vector<int> result;
	if (!pairs.empty())
		result.push_back(pairs[0].second);

	for (size_t i = 0; i < mainChain.size(); ++i)
		result.push_back(mainChain[i]);

	insertRemaining(result, pairs, unpaired);

	arr = result;
}

void PmergeMe::sortWithVector()
{
	if (vec.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;

	for (size_t i = 0; i < vec.size() - 1; i += 2)
	{
		int a = vec[i];
		int b = vec[i + 1];

		if (a > b)
			pairs.push_back(std::make_pair(a, b));
		else
			pairs.push_back(std::make_pair(b, a));
	}

	if (vec.size() % 2 == 1)
		unpaired = vec[vec.size() - 1];

	std::vector<int> mainChain;
	for (size_t i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);

	mergeInsertSort(mainChain);

	std::vector<int> result;
	if (!pairs.empty())
		result.push_back(pairs[0].second);

	for (size_t i = 0; i < mainChain.size(); ++i)
		result.push_back(mainChain[i]);

	insertRemaining(result, pairs, unpaired);

	vec = result;
}

// ...existing code...

void PmergeMe::binaryInsertDeque(std::deque<int> &arr, int value, int maxPos)
{
	int left = 0;
	int right = std::min(maxPos, (int)arr.size() - 1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	arr.insert(arr.begin() + left, value);
}

void PmergeMe::insertRemainingDeque(std::deque<int> &result, std::vector<std::pair<int, int> > &pairs, int unpaired)
{
	std::vector<int> toInsert;

	for (size_t i = 1; i < pairs.size(); ++i)
		toInsert.push_back(pairs[i].second);

	if (unpaired != -1)
		toInsert.push_back(unpaired);

	size_t jacobIdx = 1;
	size_t inserted = 0;

	while (inserted < toInsert.size())
	{
		int jacobNum = getJacobsthal(jacobIdx);

		for (int i = std::min(jacobNum - 1, (int)toInsert.size() - 1); i >= (int)inserted; --i)
		{
			binaryInsertDeque(result, toInsert[i], result.size());
			inserted++;
		}
		jacobIdx++;
	}
}

void PmergeMe::mergeInsertSortDeque(std::deque<int> &arr)
{
	if (arr.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;

	for (size_t i = 0; i < arr.size() - 1; i += 2)
	{
		int a = arr[i];
		int b = arr[i + 1];
		if (a > b)
			pairs.push_back(std::make_pair(a, b));
		else
			pairs.push_back(std::make_pair(b, a));
	}

	if (arr.size() % 2 == 1)
		unpaired = arr[arr.size() - 1];

	std::deque<int> mainChain;
	for (size_t i = 0; i < pairs.size(); ++i)
		mainChain.push_back(pairs[i].first);

	mergeInsertSortDeque(mainChain);

	std::deque<int> result;
	if (!pairs.empty())
		result.push_back(pairs[0].second);

	for (size_t i = 0; i < mainChain.size(); ++i)
		result.push_back(mainChain[i]);

	insertRemainingDeque(result, pairs, unpaired);

	arr = result;
}

void PmergeMe::sortWithDeque()
{
	if (deq.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;

	for (size_t i = 0; i < deq.size() - 1; i += 2)
	{
		int a = deq[i];
		int b = deq[i + 1];

		if (a > b)
			pairs.push_back(std::make_pair(a, b));
		else
			pairs.push_back(std::make_pair(b, a));
	}

	if (deq.size() % 2 == 1)
		unpaired = deq[deq.size() - 1];

	std::deque<int> mainChain;
	for (size_t i = 0; i < pairs.size(); i++)
		mainChain.push_back(pairs[i].first);

	mergeInsertSortDeque(mainChain);

	std::deque<int> result;
	if (!pairs.empty())
		result.push_back(pairs[0].second);

	for (size_t i = 0; i < mainChain.size(); ++i)
		result.push_back(mainChain[i]);

	insertRemainingDeque(result, pairs, unpaired);

	deq = result;
}

void PmergeMe::sort()
{
	double start = getCurrentTime();
	sortWithVector();
	vectorTime = getCurrentTime() - start;

	start = getCurrentTime();
	sortWithDeque();
	dequeTime = getCurrentTime() - start;
}
