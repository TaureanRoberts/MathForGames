#include "Matrix_2.h"
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
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
}

Matrix2 Matrix2::operator+(Matrix2 & other)
{
	Matrix2 addNum;
	addNum.mMat[0] = other.mMat[0] + mMat[0];
	addNum.mMat[1] = other.mMat[1] + mMat[1];
	addNum.mMat[2] = other.mMat[2] + mMat[2];
	addNum.mMat[3] = other.mMat[3] + mMat[3];
	return addNum;
}

Matrix2 Matrix2::operator-(Matrix2 & other)
{
	Matrix2 subNum;
	subNum.mMat[0] = other.mMat[0] - mMat[0];
	subNum.mMat[1] = other.mMat[1] - mMat[1];
	subNum.mMat[2] = other.mMat[2] - mMat[2];
	subNum.mMat[3] = other.mMat[3] - mMat[3];
	return subNum;
}

Matrix2 Matrix2::operator*(Matrix2 & other)
{
	Matrix2 multiNum;
	multiNum.mMat[0] = ((mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[2]));
	multiNum.mMat[1] = ((mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[3]));
	multiNum.mMat[2] = ((mMat[2] * other.mMat[0]) + (mMat[3] * other.mMat[2]));
	multiNum.mMat[3] = ((mMat[2] * other.mMat[2]) + (mMat[3] * other.mMat[3]));
	return multiNum;
}

bool Matrix2::operator==(Matrix2 & other)
{
	bool same = true;
	for (int i = 0; i < 4; i += 1)
	{
		if (mMat[i] == other.mMat[i])
		{
			return true;
		}
		else if (mMat[i] != other.mMat[i])
		{
			same == false;
			break;
		}
	}
	return false;
}

ostream & operator<<(ostream & output, Matrix2 & other)
{
	output << "< " << other.mMat[1] << " , " << other.mMat[2] << " >" << endl;
	output << "< " << other.mMat[3] << " , " << other.mMat[4] << " >" << endl;
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
