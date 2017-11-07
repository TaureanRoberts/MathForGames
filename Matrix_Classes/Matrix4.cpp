#include <iostream>
#include "Matrix4.h"
#include <math.h>

Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float mat[])
{
	mMat[12] = mat[12];
}

Matrix4::Matrix4(float indexA)
{
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	return Matrix4();
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	return Matrix4();
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	return Matrix4();
}

ostream & operator<<(ostream & output, Matrix4 & other)
{
	// TODO: insert return statement here
}

istream & operator>>(istream & input, Matrix4 & other)
{
	// TODO: insert return statement here
}
