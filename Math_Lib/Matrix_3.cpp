#include <iostream>
#include "Matrix_3.h"
using namespace std;

Matrix3::Matrix3()
{

}

Matrix3::Matrix3(float mat[])
{
	mMat[9] = mat[9];
}

Matrix3::Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
	mMat[4] = indexE;
	mMat[5] = indexF;
	mMat[6] = indexG;
	mMat[7] = indexH;
	mMat[8] = indexI;
}

Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 addNum;
	addNum.mMat[0] = other.mMat[0] + mMat[0];
	addNum.mMat[1] = other.mMat[1] + mMat[1];
	addNum.mMat[2] = other.mMat[2] + mMat[2];
	addNum.mMat[3] = other.mMat[3] + mMat[3];
	addNum.mMat[4] = other.mMat[4] + mMat[4];
	addNum.mMat[5] = other.mMat[5] + mMat[5];
	addNum.mMat[6] = other.mMat[6] + mMat[6];
	addNum.mMat[7] = other.mMat[7] + mMat[7];
	addNum.mMat[8] = other.mMat[8] + mMat[8];
	return addNum;
}

Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 subNum;
	subNum.mMat[0] = other.mMat[0] - mMat[0];
	subNum.mMat[1] = other.mMat[1] - mMat[1];
	subNum.mMat[2] = other.mMat[2] - mMat[2];
	subNum.mMat[3] = other.mMat[3] - mMat[3];
	subNum.mMat[4] = other.mMat[4] - mMat[4];
	subNum.mMat[5] = other.mMat[5] - mMat[5];
	subNum.mMat[6] = other.mMat[6] - mMat[6];
	subNum.mMat[7] = other.mMat[7] - mMat[7];
	subNum.mMat[8] = other.mMat[8] - mMat[8];
	return subNum;
}

Matrix3 Matrix3::operator*(Matrix3 & other)
{
	Matrix3 multiNum;
	multiNum.mMat[0] = ((mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[3]) + (mMat[2] * other.mMat[6]));
	multiNum.mMat[1] = ((mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[4]) + (mMat[2] * other.mMat[7]));
	multiNum.mMat[2] = ((mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[5]) + (mMat[2] * other.mMat[8]));
	multiNum.mMat[3] = ((mMat[3] * other.mMat[0]) + (mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[6]));
	multiNum.mMat[4] = ((mMat[3] * other.mMat[1]) + (mMat[4] * other.mMat[4]) + (mMat[5] * other.mMat[7]));
	multiNum.mMat[5] = ((mMat[3] * other.mMat[2]) + (mMat[4] * other.mMat[5]) + (mMat[5] * other.mMat[8]));
	multiNum.mMat[6] = ((mMat[6] * other.mMat[0]) + (mMat[7] * other.mMat[3]) + (mMat[8] * other.mMat[6]));
	multiNum.mMat[7] = ((mMat[6] * other.mMat[1]) + (mMat[7] * other.mMat[4]) + (mMat[8] * other.mMat[7]));
	multiNum.mMat[8] = ((mMat[6] * other.mMat[2]) + (mMat[7] * other.mMat[5]) + (mMat[8] * other.mMat[8]));
	return multiNum;
}

bool Matrix3::operator==(Matrix3 & other)
{
	bool same = true;
	for (int i = 0; i < 8; i += 1)
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

ostream & operator<<(ostream & output, Matrix3 & other)
{
	output << "< " << other.mMat[0] << " , " << other.mMat[1] << "," << other.mMat[2] << " >" << endl;
	output << "< " << other.mMat[3] << " , " << other.mMat[4] << "," << other.mMat[5] << " >" << endl;
	output << "< " << other.mMat[6] << " , " << other.mMat[7] << "," << other.mMat[8] << " >" << endl;
	return output;
}

istream & operator >> (istream & input, Matrix3 & other)
{
	input >> other.mMat[0];
	input >> other.mMat[1];
	input >> other.mMat[2];
	input >> other.mMat[3];
	input >> other.mMat[4];
	input >> other.mMat[5];
	input >> other.mMat[6];
	input >> other.mMat[7];
	input >> other.mMat[8];
	return input;
}
