/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:32:40 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/18 11:05:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// printf("==>  %lu\n", sizeof(arr));
	// printf("==>  %lu\n", sizeof(arr[0]));
	iter(arr, sizeof(arr) / sizeof(arr[0]), printElement<int>);

	/*char : */
	char arrc[] = {'a', 'b', 'c', 'd', 'e'};
	// iter(arr, sizeof(arr) / sizeof(arr[0]), squareElement<int>);
	iter(arrc, sizeof(arrc) / sizeof(arrc[0]), printElement<char>);
	
	return 0;
}