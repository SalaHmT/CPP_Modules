/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:45:02 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/13 23:50:05 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Iter.hpp"

// void print(char i)
// {
//     std::cout << i << std::endl;
// }

// int main()
// {
//     try
//     {
//         char array[] = {'a', 'b', 'c', 'd', 'e'};
//         iter(array, 5, print);
//         std::cout << std::endl;

//         iter(array, 5, printV2<char>);
//         std::cout << std::endl;

//     }
//     catch (const char *e)
//     {
//         std::cerr << e << std::endl;
//     }

//     return 0;
// }

/**********************************************************************/

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}