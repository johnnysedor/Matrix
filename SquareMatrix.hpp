/*
 * SquareMatrix.hpp
 *
 *  Created on: Dec 13, 2016
 *      Author: j
 */

/*		   	    n_size
 *           ├─────────┤
 *         ┬ ┌─┬─┬─┬─┬─┐
 *         │ ├─┼─┼─┼─┼─┤
 *  n_size │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         ┴ └─┴─┴─┴─┴─┘
 */

#ifndef SQUAREMATRIX_HPP_
#define SQUAREMATRIX_HPP_

#include "Matrix.hpp"
#include <vector>
#include <complex>
#include <ratio>

namespace math {

template<typename TYPE>
class SquareMatrix: public Matrix<TYPE>{
public:
	SquareMatrix(const unsigned long& SIZE);

	virtual ~SquareMatrix();

	TYPE determinant() const;

	bool isDiag() const;

	bool isIdentity() const;

	bool isSymmetric() const;

	std::vector<std::complex<double> > eigenvalues() const;


	SquareMatrix& operator=(const SquareMatrix& RHS);

	bool operator==(const SquareMatrix& RHS) const;

	bool operator!=(const SquareMatrix& RHS) const;


};

} /* namespace math */

#endif /* SQUAREMATRIX_HPP_ */
