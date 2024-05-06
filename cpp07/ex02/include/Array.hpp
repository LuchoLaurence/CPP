/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:01:06 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/06 12:01:06 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//classes

template<typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	
	public:

		Array() 
		{
			this->_size = 0;
			this->_array = new T[0];
		}

		Array(unsigned int x){
			this->_size = x;
			this->_array = new T[x];
		}

		~Array() 
		{
			delete this->_array;
		}

		Array(Array const & cpy) : _size(cpy.size())
		{
			T *ref = cpy.getT();
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)
				_array[i] = ref[i];
		}

		Array & operator=(Array const & other)
		{
			T *ref = other.getT();
			this->_size = other.size();
			delete this->_array;
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)
				_array[i] = ref[i];
			return (*this);
		}

		T & operator[](unsigned int index)
		{
			if (index >= this->_size || this->_array == NULL)
			{
				throw Array< T >::InvalidIndexException();
			}
			return (this->_array[index]);
		}


		// getter
		unsigned int size() const 
		{
			return (this->_size);
		}

		T *getT(void) const 
		{
			return (this->_array);
		}

		//exception
		class InvalidIndexException : public std::exception 
		{
			virtual const char *what() const throw();
		};


};

//template<typename T>
//std::ostream & operator<<(std::ostream & o, Array< T > const & ref)
//{
	//for(unsigned int i = 0; i < ref.size(); i++)
	//{
	//	std::cout << ""
	//}
//}

template<typename T>
const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid Index");
}