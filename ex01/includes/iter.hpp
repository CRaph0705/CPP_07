/* 
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array, passed as a const value.
• The third one is a function that will be called on every element of the array
*/

// iter(array, length, function);


#pragma once
#include <cstddef>

template <typename T>
void iter(T const *array, size_t length, void(*f)(T const&))
{

	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
	return ;
}

template <typename T>
void iter(T *array, size_t length, void(*f)(T &))
{

	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
	return ;
}
