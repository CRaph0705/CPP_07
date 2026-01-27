#include "main.hpp"

template <typename T>
void print_elem(T const &elem)
{
	std::cout << "element : " << elem << std::endl;
	return ;
}

void capitalize(std::string const &str)
{
	for (size_t i = 0; i < str.size(); i++)
		std::cout << static_cast<char>(std::toupper(str[i]));
	std::cout << std::endl;
}

void print_square(const int &x)
{
	std::cout << "square " << x << " = " << (x * x) << std::endl;
}

int main()
{
	std::cout << "str test >>>>" << std::endl;
	std::string str_array[2] = {"toto", "plop"};
	iter(str_array, 2, &print_elem);
	// std::string str_array[4];
	// iter(str_array, 4, &print_elem);

	std::cout << std::endl;

	std::cout << "int test >>>>" << std::endl;
	const int int_array[5] = {12, 14, 7, 42, 8};
	iter(int_array, 5, &print_elem);

	iter(str_array, 2, &capitalize);

	iter(int_array, 5, &print_square);
	return (0);
}