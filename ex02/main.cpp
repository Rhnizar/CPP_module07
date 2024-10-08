/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:17:50 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/19 16:10:56 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{

	/*test the code */
	try 
	{
        // Testing the Array class
        Array<int> arr(5); // Create an array of 5 integers
        for (unsigned int i = 0; i < 5; ++i) {
            arr[i] = i; // Initialize the elements
        }

        // Copy the array and modify the copy
        Array<int> arrCopy = arr;
        arrCopy[0] = 100;

        // Display the original and modified arrays
        std::cout << "Original Array: ";
        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Copied Array: ";
        for (unsigned int i = 0; i < arrCopy.size(); ++i) {
            std::cout << arrCopy[i] << " ";
        }
        std::cout << std::endl;

    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	return 0;
}
