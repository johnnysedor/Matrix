/*
 * Matrix.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: j
 */

#include "Matrix.hpp"

namespace math {

//template<typename TYPE>
//Matrix<TYPE>::Matrix() {
// Auto-generated constructor stub
//
//}

template<typename TYPE>
math::Matrix<TYPE>::Matrix(const size_t& M_SIZE,
					 const size_t& N_SIZE)
	: m_size(M_SIZE), n_size(N_SIZE)
{
	try
	{
		mat = (TYPE *)malloc(m_size * n_size * sizeof(TYPE));
	}
	catch (std::bad_alloc& ba)
	{
		throw ba;
	}

}

template<typename TYPE>
math::Matrix<TYPE>::Matrix(const Matrix& matrix)
{
	*this = matrix;
}

template<typename TYPE>
math::Matrix<TYPE>::~Matrix() {
}

}

template<typename TYPE>
math::Matrix<TYPE>& math::Matrix<TYPE>::operator=(const Matrix& RHS)
{

}

template<typename TYPE>
bool math::Matrix<TYPE>::operator==(const Matrix& RHS) const
{
	// First checks if the sizes of he two matrices are the same
	if(this->m_size == RHS.m_size &&
	   this->n_size == RHS.n_size)
	{
		for(size_t row = 0; row < m_size; row++)
		{
			for(size_t col = 0; col < n_size; col++)
			{
				if(this->mat[row][col] != RHS.mat[row][col])
				{
					return false;
				}
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

template<typename TYPE>
bool math::Matrix<TYPE>::operator!=(const Matrix& RHS) const
{
	return !( (*this)==RHS );
}

//template<typename TYPE>
//math::Matrix<TYPE> math::Matrix<TYPE>::rref()
//{
//
//}
