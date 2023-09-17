/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:32:40 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/17 20:16:41 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	
	int arr[5] = {1, 2, 3, 4, 5};
	// printf("==>  %lu\n", sizeof(arr));
	// printf("==>  %lu\n", sizeof(arr[0]));
	iter(arr, sizeof(arr) / sizeof(arr[0]), squareElement<int>);
	iter(arr, sizeof(arr) / sizeof(arr[0]), printElement<int>);
	return 0;
}