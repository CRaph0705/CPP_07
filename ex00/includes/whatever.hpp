#pragma once

#include <iostream>


/* • swap: Swaps the values of two given parameters. Does not return anything. */
template <typename T>
void swap(T &a, T&b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
	return ;
}

/* • min: Compares the two values passed as parameters and returns the smallest one.
If they are equal, it returns the second one */
template <typename T>
T const & min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

/* • max: Compares the two values passed as parameters and returns the greatest one.
If they are equal, it returns the second one. */
template <typename T>
T const & max(T const &a, T const &b)
{
	return (a > b ? a : b);
}
