/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:19:24 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/17 15:30:06 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template<class T>
void	swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
template<class T>
T min(T& a, T& b)
{
	if (a > b)
		return b;
	else
		return a;
}


template<class T>
T max(T& a, T& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif