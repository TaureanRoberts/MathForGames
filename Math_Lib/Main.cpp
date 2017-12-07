#include <iostream>
#include "Matrix_2.h"
#include "Matrix_3.h"
#include "Matrix_4.h"
#include "Vector_2.h"
#include "Vector_3.h"
#include "Vector_4.h"
#include <assert.h>

using namespace std;

int main()
{
	Matrix2 *test1 = new Matrix2(1, 2, 0, 2);
	Matrix2 *test2 = new Matrix2(1, 0, 1, 1);
	assert((*test1 + *test2) == Matrix2(2, 2, 1, 3));
	assert((*test1 - *test2) == Matrix2(0, 2, 1, 1));
	assert((*test1 * *test2) == Matrix2(3, 2, 2, 2));

	Matrix3 *test3 = new Matrix3(1, 0, 3, 2, 1, 0, 1, 1, 11);
	Matrix3 *test4 = new Matrix3(5, 1, 0, 1, 0, 9, 10, 1, 0);
	assert((*test3 + *test4) == Matrix3(6, 1, 3, 3, 1, 9, 11, 2, 11));
	assert((*test3 - *test4) == Matrix3(4, 1, 3, 1, 1, 9, 9, 0, 11));
	assert((*test3 * *test4) == Matrix3(35, 4, 0, 11, 2, 9, 116, 12, 9));

	Matrix4 *test5 = new Matrix4(1, 2, 0, 2, 1, 2, 0, 2, 1, 2, 0, 2, 1, 2, 0, 2);
	Matrix4 *test6 = new Matrix4(1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1);
	assert((*test5 + *test6) == Matrix4(2, 2, 1, 3, 2, 2, 1, 3, 2, 2, 1, 3, 2, 2, 1, 3));
	assert((*test5 - *test6) == Matrix4(0, 2, 1, 1, 0, 2, 1, 1, 0, 2, 1, 1, 0, 2, 1, 1));
	assert((*test5 * *test6) == Matrix4(5, 0, 5, 5, 5, 0, 5, 5, 5, 0, 5, 5, 5, 0, 5, 5));

}