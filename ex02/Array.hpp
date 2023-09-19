/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:28:23 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/19 16:11:26 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private:
		T* array;
		unsigned int sizeArray;
	public:
		Array()
		{
			sizeArray = 0;
			array = new T[sizeArray];
		}
		Array(unsigned int n)
		{
			if(n > 0)
			{
				array = new T[n];
				for(unsigned int i=0; i<n; i++)
					array[i] = T();
				sizeArray = n;
			}
			else
				array = NULL;
		}
		Array(const Array& otherArray)
		{
			array = NULL;
			*this = otherArray;
		}
		Array& operator=(const Array& otherArray)
		{
			if (this != &otherArray)
			{
				delete[] array;
				array = new T[otherArray.sizeArray];
				for(unsigned int i=0; i<otherArray.sizeArray; i++)
						array[i] = otherArray.array[i];
				sizeArray = otherArray.sizeArray;
			}
			return *this;
		}
		~Array()
		{
			delete[] array;
		}
		unsigned int	size()
		{
			return this->sizeArray;
		}

		T& operator[](unsigned int index)
		{
			if (index >= sizeArray)
				throw std::out_of_range("out of range !! ");
			else
				return array[index];
		}
};

#endif