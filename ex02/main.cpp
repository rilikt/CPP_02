/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:24 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 17:30:44 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a(1);
//     Fixed c(1);
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a + b << std::endl;
//     std::cout << a - b << std::endl;
//     std::cout << a / b << std::endl;
//     if (a != b)
//         std::cout << "ok" << std::endl;
//     else
//         std::cout << "nok" << std::endl;

//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << Fixed::min(a, b) << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }

// int main( void ) {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     // std::cout << a << std::endl;
//     // std::cout << a++ << std::endl;
//     // std::cout << a << std::endl;
//     // std::cout << b << std::endl;
//     // std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}