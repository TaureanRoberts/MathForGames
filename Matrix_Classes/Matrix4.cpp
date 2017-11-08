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

Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD)
{
	mMat[12] = indexA;
	mMat[12] = indexB;
	mMat[12] = indexC;
	mMat[12] = indexD;
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 addNum;
	addNum.mMat[1] = other.mMat[1] + mMat[1];
	addNum.mMat[2] = other.mMat[2] + mMat[2];
	addNum.mMat[3] = other.mMat[3] + mMat[3];
	addNum.mMat[4] = other.mMat[4] + mMat[4];
	addNum.mMat[5] = other.mMat[5] + mMat[5];
	addNum.mMat[6] = other.mMat[6] + mMat[6];
	addNum.mMat[7] = other.mMat[7] + mMat[7];
	addNum.mMat[8] = other.mMat[8] + mMat[8];
	addNum.mMat[9] = other.mMat[9] + mMat[9];
	addNum.mMat[10] = other.mMat[10] + mMat[10];
	addNum.mMat[11] = other.mMat[11] + mMat[11];
	addNum.mMat[12] = other.mMat[12] + mMat[12];
	addNum.mMat[13] = other.mMat[13] + mMat[13];
	addNum.mMat[14] = other.mMat[14] + mMat[14];
	addNum.mMat[15] = other.mMat[15] + mMat[15];
	addNum.mMat[16] = other.mMat[16] + mMat[16];
	return addNum;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	Matrix4 subNum;
	subNum.mMat[1] = other.mMat[1] - mMat[1];
	subNum.mMat[2] = other.mMat[2] - mMat[2];
	subNum.mMat[3] = other.mMat[3] - mMat[3];
	subNum.mMat[4] = other.mMat[4] - mMat[4];
	subNum.mMat[5] = other.mMat[5] - mMat[5];
	subNum.mMat[6] = other.mMat[6] - mMat[6];
	subNum.mMat[7] = other.mMat[7] - mMat[7];
	subNum.mMat[8] = other.mMat[8] - mMat[8];
	subNum.mMat[9] = other.mMat[9] - mMat[9];
	subNum.mMat[10] = other.mMat[10] - mMat[10];
	subNum.mMat[11] = other.mMat[11] - mMat[11];
	subNum.mMat[12] = other.mMat[12] - mMat[12];
	subNum.mMat[13] = other.mMat[13] + mMat[13];
	subNum.mMat[14] = other.mMat[14] + mMat[14];
	subNum.mMat[15] = other.mMat[15] + mMat[15];
	subNum.mMat[16] = other.mMat[16] + mMat[16];
	return subNum;
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 multiNum;
	multiNum.mMat[1] = ((mMat[1] * other.mMat[1]) + (mMat[2] * other.mMat[5]) + (mMat[3] * other.mMat[9])+(mMat[4] * other.mMat[13]));
	multiNum.mMat[2] = ((mMat[1] * other.mMat[2]) + (mMat[2] * other.mMat[6]) + (mMat[3] * other.mMat[10])+(mMat[4] * other.mMat[14]));
	multiNum.mMat[3] = ((mMat[1] * other.mMat[3]) + (mMat[2] * other.mMat[7]) + (mMat[3] * other.mMat[11])+(mMat[4] * other.mMat[15]));
	multiNum.mMat[4] = ((mMat[1] * other.mMat[4]) + (mMat[5] * other.mMat[8]) + (mMat[6] * other.mMat[12])+(mMat[4] * other.mMat[16]));
	multiNum.mMat[5] = ((mMat[5] * other.mMat[1]) + (mMat[5] * other.mMat[5]) + (mMat[6] * other.mMat[9])+(mMat[8] * other.mMat[13]));
	multiNum.mMat[6] = ((mMat[5] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[10])+(mMat[8] * other.mMat[14]));
	multiNum.mMat[7] = ((mMat[5] * other.mMat[3]) + (mMat[8] * other.mMat[7]) + (mMat[9] * other.mMat[11])+(mMat[8] * other.mMat[15]));
	multiNum.mMat[8] = ((mMat[5] * other.mMat[4]) + (mMat[8] * other.mMat[8]) + (mMat[9] * other.mMat[12])+(mMat[8] * other.mMat[16]));
	multiNum.mMat[9] = ((mMat[9] * other.mMat[1]) + (mMat[8] * other.mMat[5]) + (mMat[9] * other.mMat[9])+(mMat[12] * other.mMat[13]));
	multiNum.mMat[10] = ((mMat[9] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[10]) + (mMat[12] * other.mMat[14]));
	multiNum.mMat[11] = ((mMat[9] * other.mMat[3]) + (mMat[8] * other.mMat[7]) + (mMat[9] * other.mMat[11]) + (mMat[12] * other.mMat[15]));
	multiNum.mMat[12] = ((mMat[9] * other.mMat[4]) + (mMat[8] * other.mMat[8]) + (mMat[9] * other.mMat[12]) + (mMat[12] * other.mMat[16]));
	multiNum.mMat[13] = ((mMat[13] * other.mMat[1]) + (mMat[8] * other.mMat[5]) + (mMat[9] * other.mMat[9]) + (mMat[16] * other.mMat[13]));
	multiNum.mMat[14] = ((mMat[13] * other.mMat[2]) + (mMat[8] * other.mMat[6]) + (mMat[9] * other.mMat[10]) + (mMat[16] * other.mMat[14]));
	multiNum.mMat[15] = ((mMat[13] * other.mMat[3]) + (mMat[8] * other.mMat[7]) + (mMat[9] * other.mMat[11]) + (mMat[16] * other.mMat[15]));
	multiNum.mMat[16] = ((mMat[13] * other.mMat[4]) + (mMat[8] * other.mMat[8]) + (mMat[9] * other.mMat[12]) + (mMat[16] * other.mMat[16]));
	return multiNum;
}

ostream & operator<<(ostream & output, Matrix4 & other)
{
	output << "< " << other.mMat[1] << " , " << other.mMat[2] << " , " << other.mMat[3] << " , " << other.mMat[4] << " >" << endl;
	output << "< " << other.mMat[5] << " , " << other.mMat[6] << " , " << other.mMat[7] << " , " << other.mMat[8] << " >" << endl;
	output << "< " << other.mMat[9] << " , " << other.mMat[10] << " , " << other.mMat[11] << " , " << other.mMat[12] << " >" << endl;
	output << "< " << other.mMat[13] << " , " << other.mMat[14] << " , " << other.mMat[15] << " , " << other.mMat[16] << " >" << endl;
	return output;
}

istream & operator>>(istream & input, Matrix4 & other)
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
	input >> other.mMat[10];
	input >> other.mMat[11];
	input >> other.mMat[12];
	input >> other.mMat[13];
	input >> other.mMat[14];
	input >> other.mMat[15];
	input >> other.mMat[16];
	return input;
}
