#pragma once

template <typename T>
class Array {
	private:
		int _size;
	public:
		/* • Construction with no parameter: Creates an empty array. */
		Array();
		/*
		• Construction with an unsigned int n as a parameter: Creates an array of n elements
		initialized by default.
		Tip: Try to compile int * a = new int(); then display *a. 
		*/
		Array(unsigned int n);
		/* • Construction by copy and assignment operator. In both cases, modifying either the
		original array or its copy after copying musn’t affect the other array. */
		Array(Array const &cpy);
		Array &operator=(Array const &cpy);
		~Array();
} ;