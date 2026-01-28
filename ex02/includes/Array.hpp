#pragma once

template <typename T>
class Array {
	private:
		int _size;
		T * _data;
	public:
		/* • Construction with no parameter: Creates an empty array. */
		Array() : _size(0), _data(NULL)
		{
			std::cout << "Array default constructor function called" << std::endl;
		};

		/*
		• Construction with an unsigned int n as a parameter: Creates an array of n elements
		initialized by default.
		Tip: Try to compile int * a = new int(); then display *a. 
		*/
		Array(unsigned int n): _size(n), _data(new T[n])
		{
			std::cout << "Array overloaded constructor function called" << std::endl;
		};

		/* • Construction by copy and assignment operator. In both cases, modifying either the
		original array or its copy after copying musn’t affect the other array. */
		Array(Array const &cpy) : _size(cpy._size), _data(NULL)
		{
			std::cout << "Array copy constructor function called" << std::endl;
			//
			if(this->_size > 0)
			{
				_data = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
				{
					data[i] = cpy._data[i];
				}
			}
		};

		Array &operator=(Array const &cpy)
		{
			std::cout << "Array operator= function called" << std::endl;
			if (this != &cpy)
			{
				delete[] _data;
				this->_size = cpy._size;
				if(this->_size > 0)
					this->_data = new T[this->_size];
				else
					this->_data = NULL;
				for (unsigned int i = 0; i < this->_size; i++)
				{
					this->_data[i] = cpy._data[i];
				}
			}
			return (*this);
		};

		~Array()
		{
			std::cout << "Array destructor function called" << std::endl;
			delete[] _data;
		};
} ;