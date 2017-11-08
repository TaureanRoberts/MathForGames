#include "Matrix2.h"
#include <iostream>
#include <math.h>
using namespace std;
Matrix2::Matrix2()
{

}

Matrix2::Matrix2(float mat[])
{
	mMat[4] = mat[4];
}

Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD)
{
	mMat[1] = indexA;
	mMat[2] = indexB;
	mMat[3] = indexC;
	mMat[4] = indexD;
}

Matrix2 Matrix2::operator+(Matrix2 & other)
{
	Matrix2 addNum;
	addNum.mMat[1] = other.mMat[1] + mMat[1];
	addNum.mMat[2] = other.mMat[2] + mMat[2];
	addNum.mMat[3] = other.mMat[3] + mMat[3];
	addNum.mMat[4] = other.mMat[4] + mMat[4];
	return addNum;
}

Matrix2 Matrix2::operator-(Matrix2 & other)
{
	Matrix2 subNum;
	subNum.mMat[1] = other.mMat[1] - mMat[1];
	subNum.mMat[2] = other.mMat[2] - mMat[2];
	subNum.mMat[3] = other.mMat[3] - mMat[3];
	subNum.mMat[4] = other.mMat[4] - mMat[4];
	return subNum;
}

Matrix2 Matrix2::operator*(Matrix2 & other)
{
	Matrix2 multiNum;
	multiNum.mMat[1] = ((mMat[1] * other.mMat[1])+(mMat[2] * other.mMat[3]));
	multiNum.mMat[2] = ((mMat[1] * other.mMat[2])+(mMat[2] * other.mMat[4]));
	multiNum.mMat[3] = ((mMat[3] * other.mMat[1])+(mMat[4] * other.mMat[3]));
	multiNum.mMat[4] = ((mMat[3] * other.mMat[2])+(mMat[4] * other.mMat[4]));
	return multiNum;
}

ostream & operator<<(ostream & output, Matrix2 & other)
{
	output << "< " << other.mMat[1] << " , " << other.mMat[2] <<" , " << other.mMat[3]<<" >" << endl;
	output << "< " << other.mMat[4] << " , " << other.mMat[5] << " >" << endl;
	return output;
}

istream & operator >> (istream & input, Matrix2 & other)
{
	input >> other.mMat[1];
	input >> other.mMat[2];
	input >> other.mMat[3];
	input >> other.mMat[4];
	return input;
}
