#include "main.hpp"

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << "swap(a, b) -> ";
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;


	std::string s1 = "test";
	std::string s2 = "plop";
	std::cout << "s1 = \"" << s1 << "\"" << std::endl;
	std::cout << "s2 = \"" << s2 << "\"" << std::endl;
	std::cout << "swap(s1, s2) -> ";
	::swap(s1, s2);
	std::cout << "s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"" << std::endl;


	a = 5;
	b = 5;

	std::cout << ::min(a, b) << std::endl;
	std::cout << ::max(a, b) << std::endl;


	const int c = 1;
	const int d = 2;

	std::cout << min(c, d) << std::endl;
	std::cout << max(c, d) << std::endl;


	return (0);
}
/* 
int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
} */