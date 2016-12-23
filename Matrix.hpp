/*
 * Matrix.hpp
 *
 *  Created on: Dec 13, 2016
 *      Author: j
 */


/*		   	    n_size
 *           ├─────────────┤
 *         ┬ ┌─┬─┬─┬─┬─┬─┬─┐
 *         │ ├─┼─┼─┼─┼─┼─┼─┤
 *  m_size │ ├─┼─┼─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┼─┼─┤
 *         ┴ └─┴─┴─┴─┴─┴─┴─┘
 */

/*		   	    n_size
 *           ├─────────┤
 *         ┬ ┌─┬─┬─┬─┬─┐
 *         │ ├─┼─┼─┼─┼─┤
 *  m_size │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         │ ├─┼─┼─┼─┼─┤
 *         ┴ └─┴─┴─┴─┴─┘
 */

#include <cstdlib>
#include <new>

#ifndef MATRIX_HPP_
#define MATRIX_HPP_

namespace math {

template<typename TYPE>
class Matrix {
protected:
	const size_t n_size;

	TYPE** mat;

private:
	const size_t m_size;

	/***********************************************************/
public:
	Matrix(const size_t& M_SIZE, const size_t& N_SIZE);

	Matrix(const Matrix&);

	virtual ~Matrix();

	// TODO
//	Matrix rref() const;




	Matrix& operator=(const Matrix& RHS);

	bool operator==(const Matrix& RHS) const;

	bool operator!=(const Matrix& RHS) const;

}; // END -- class Matrix

} // END -- namespace math

#endif /* MATRIX_HPP_ */
