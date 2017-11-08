#include <iostream>
#include "Matrix3.h"
using namespace std;

Matrix3::Matrix3()
{
}

Matrix3::Matrix3(float mat[])
{
	mMat[9] = mat[9];
}

Matrix3::Matrix3(float indexA, float indexB, float indexC, float indexD)
{
	mMat[9] = indexA;
	mMat[9] = indexB;
	mMat[9] = indexC;
	mMat[9] = indexD;
}

Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 addNum;
	addNum.mMat[1] = other.mMat[1] + mMat[1];
	addNum.mMat[2] = other.mMat[2] + mMat[2];
	addNum.mMat[3] = other.mMat[3] + mMat[3];
	addNum.mMat[4] = other.mMat[4] + mMat[4];
	addNum.mMat[5] = other.mMat[5] + mMat[5];
	addNum.mMat[6] = other.mMat[6] + mMat[6];
	addNum.mMat[7] = other.mMat[7] + mMat[7];
	addNum.mMat[8] = other.mMat[8] + mMat[8];
	addNum.mMat[9] = other.mMat[9] + mMat[9];
	return addNum;
}

Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 subNum;
	subNum.mMat[1] = other.mMat[1] - mMat[1];
	subNum.mMat[2] = other.mMat[2] - mMat[2];
	subNum.mMat[3] = other.mMat[3] - mMat[3];
	subNum.mMat[4] = other.mMat[4] - mMat[4];
	subNum.mMat[5] = other.mMat[5] - mMat[5];
	subNum.mMat[6] = other.mMat[6] - mMat[6];
	subNum.mMat[7] = other.mMat[7] - mMat[7];
	subNum.mMat[8] = other.mMat[8] - mMat[8];
	subNum.mMat[9] = other.mMat[9] - mMat[9];
	return subNum;
}

Matrix3 Matrix3::operator*(Matrix3 & other)
{
	Matrix3 multiNum;
	multiNum.mMat[1] = ((mMat[1] * other.mMat[1]) + (mMat[2] * other.mMat[4]) + (mMat[3] * other.mMat[7]));
	multiNum.mMat[2] = ((mMat[1] * other.mMat[2]) + (mMat[2] * other.mMat[5]) + (mMat[3] * other.mMat[8]));
	multiNum.mMat[3] = ((mMat[1] * other.mMat[3]) + (mMat[2] * other.mMat[6]) + (mMat[3] * other.mMat[9]));
	multiNum.mMat[4] = ((mMat[4] * other.mMat[1]) + (mMat[5] * other.mMat[4]) + (mMat[6] * other.mMat[7]));
	multiNum.mMat[5] = ((mMat[4] * other.mMat[2]) + (mMat[5] * other.mMat[5]) + (mMat[6] * other.mMat[8]));
	multiNum.mMat[6] = ((mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[9]));
	multiNum.mMat[7] = ((mMat[7] * other.mMat[1]) + (mMat[8] * other.mMat[4]) + (mMat[9] * other.mMat[7]));
	multiNum.mMat[8] = ((mMat[7] * other.mMat[2]) + (mMat[8] * other.mMat[5]) + (mMat[9] * other.mMat[8]));
	multiNum.mMat[9] = ((mMat[7] * other.mMat[3]) + (mMat[8] * other.mMat[6]) + (mMat[9] * other.mMat[9]));
	return multiNum;
}

ostream & operator<<(ostream & output, Matrix3 & other)
{
	output << "< " << other.mMat[1] << " , " << other.mMat[2] << "," << other.mMat[3] << " >" << endl;
	output << "< " << other.mMat[4] << " , " << other.mMat[5] << "," << other.mMat[6] << " >" << endl;
	output << "< " << other.mMat[7] << " , " << other.mMat[8] << "," << other.mMat[9] << " >" << endl;
	return output;
}

istream & operator >> (istream & input, Matrix3 & other)
{
	input >> other.mMat[1];
	input >> other.mMat[2];
	input >> other.mMat[3];
	input >> other.mMat[4];
	input >> other.mMat[5];
	input >> other.mMat[6];
	input >> other.mMat[7];
	input >> other.mMat[8];
	input >> other.mMat[9];
	return input;
}
