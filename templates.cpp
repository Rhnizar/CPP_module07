/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:43:19 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/17 12:00:34 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

float funcAvrage(int a, int b)
{
	float avg = (a+b)/2;
	return avg;
}

// template<typename T>
template<class T>

void	swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	char a='a', b='b';
	
	std::cout << a << " - " << b << std::endl;
	::swap(a, b);
	std::cout << a << " - " << b << std::endl;
	
	return 0;
}