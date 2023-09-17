/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:32:54 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/17 20:22:53 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T , typename Func>
void iter(T* array, size_t lenght, Func func)
{
	for(size_t i=0; i<lenght; i++)
		func(array[i]);
}

template <typename T>
void	printElement(T& element)
{
	std::cout << element << std::endl;
}

template <typename T>
void squareElement(T& element)
{
    element *= element;
}

#endif