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

    return 0;
}

