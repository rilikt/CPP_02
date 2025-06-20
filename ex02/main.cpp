/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:24 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 16:15:21 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//own main
int main(void)
{
	Fixed a(5);
	Fixed b(10);
	Fixed c(5);
	
	std::cout << G << "- Comparison overload -" << R << std::endl;
	if (a < b)
		std::cout << Y << "Object a is smaller" << R << std::endl;
	if (a <= c)
		std::cout << Y << "Object a is smaller or equal to c" << R << std::endl;
	if (a >= b)
			std::cout << Y << "Object a is bigger or equal to b" << R << std::endl;
	if (b > a)
		std::cout << Y << "Object b is bigger" << R << std::endl;
	if (a == b)
		std::cout << Y << "Object a and b are equal" << R << std::endl;
	if (a != b)
		std::cout << Y << "Object a and b are not equal" << R << std::endl;

	std::cout << G << "- Math overload -" << R << std::endl;
	std::cout << B << a << " x " << b << " = " << a * b << R << std::endl;
	std::cout << B << b << " / " << a << " = " << b / a << R << std::endl;
	std::cout << B << b << " - " << a << " = " << b - a << R << std::endl;
	std::cout << B << b << " + " << a << " = " << b + a << R << std::endl;

	std::cout << G << "- Increment overload -" << R << std::endl;
	std::cout << B << ++b << R << std::endl;
	std::cout << a++ << std::endl;
	std::cout << B << a << R << std::endl;

	std::cout << G << "- Decrement overload -" << R << std::endl;
	std::cout << B << --b << R << std::endl;
	std::cout << a-- << std::endl;
	std::cout << B << a << R << std::endl;

	std::cout << G << "- Min Max -" << R << std::endl;
	std::cout << Y << "Max:" << Fixed::max(a , b) << R << std::endl;
	std::cout << Y << "Min:" << Fixed::min(a , b) << R << std::endl;

	return (0);
}

// subject main
// int main( void ) 
// {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }