#include <iostream>
#include "Matrix4.h"
<<<<<<< HEAD
=======
#include <math.h>
>>>>>>> origin/master

Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float mat[])
{
	mMat[12] = mat[12];
}

<<<<<<< HEAD
Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD)
{
	mMat[12] = indexA;
	mMat[12] = indexB;
	mMat[12] = indexC;
=======
Matrix4::Matrix4(float indexA)
{
>>>>>>> origin/master
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

<<<<<<< HEAD
istream & operator >> (istream & input, Matrix4 & other)
=======
istream & operator>>(istream & input, Matrix4 & other)
>>>>>>> origin/master
{
	// TODO: insert return statement here
}
