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

Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP)
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
	mMat[9] = indexJ;
	mMat[10] = indexK;
	mMat[11] = indexL;	
	mMat[12] = indexM;
	mMat[13] = indexN;
	mMat[14] = indexO;
	mMat[15] = indexP;
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 addNum;
	addNum.mMat[0] = other.mMat[0] + mMat[0];
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
	return addNum;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	Matrix4 subNum;
	subNum.mMat[0] = other.mMat[0] - mMat[0];
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
	subNum.mMat[12] = other.mMat[12] + mMat[12];
	subNum.mMat[13] = other.mMat[13] + mMat[13];
	subNum.mMat[14] = other.mMat[14] + mMat[14];
	subNum.mMat[15] = other.mMat[15] + mMat[15];
	return subNum;
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 multiNum;
	multiNum.mMat[0] = ((mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[4]) + (mMat[2] * other.mMat[8])+(mMat[3] * other.mMat[12]));
	multiNum.mMat[1] = ((mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[5]) + (mMat[2] * other.mMat[9])+(mMat[3] * other.mMat[13]));
	multiNum.mMat[2] = ((mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[6]) + (mMat[2] * other.mMat[10])+(mMat[3] * other.mMat[14]));
	multiNum.mMat[3] = ((mMat[0] * other.mMat[3]) + (mMat[1] * other.mMat[7]) + (mMat[2] * other.mMat[11])+(mMat[3] * other.mMat[15]));
	multiNum.mMat[4] = ((mMat[4] * other.mMat[0]) + (mMat[5] * other.mMat[4]) + (mMat[6] * other.mMat[8])+(mMat[7] * other.mMat[12]));
	multiNum.mMat[5] = ((mMat[4] * other.mMat[1]) + (mMat[5] * other.mMat[5]) + (mMat[6] * other.mMat[9])+(mMat[7] * other.mMat[13]));
	multiNum.mMat[6] = ((mMat[4] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[10])+(mMat[7] * other.mMat[14]));
	multiNum.mMat[7] = ((mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[7]) + (mMat[6] * other.mMat[11])+(mMat[7] * other.mMat[15]));
	multiNum.mMat[8] = ((mMat[8] * other.mMat[0]) + (mMat[7] * other.mMat[4]) + (mMat[10] * other.mMat[8])+(mMat[11] * other.mMat[12]));
	multiNum.mMat[9] = ((mMat[8] * other.mMat[1]) + (mMat[7] * other.mMat[5]) + (mMat[10] * other.mMat[9]) + (mMat[11] * other.mMat[13]));
	multiNum.mMat[10] = ((mMat[8] * other.mMat[2]) + (mMat[7] * other.mMat[6]) + (mMat[10] * other.mMat[10]) + (mMat[11] * other.mMat[14]));
	multiNum.mMat[11] = ((mMat[8] * other.mMat[3]) + (mMat[7] * other.mMat[7]) + (mMat[10] * other.mMat[11]) + (mMat[11] * other.mMat[15]));
	multiNum.mMat[12] = ((mMat[12] * other.mMat[0]) + (mMat[13] * other.mMat[4]) + (mMat[14] * other.mMat[8]) + (mMat[15] * other.mMat[12]));
	multiNum.mMat[13] = ((mMat[12] * other.mMat[1]) + (mMat[13] * other.mMat[5]) + (mMat[14] * other.mMat[9]) + (mMat[15] * other.mMat[13]));
	multiNum.mMat[14] = ((mMat[12] * other.mMat[2]) + (mMat[13] * other.mMat[6]) + (mMat[14] * other.mMat[10]) + (mMat[15] * other.mMat[14]));
	multiNum.mMat[15] = ((mMat[12] * other.mMat[3]) + (mMat[13] * other.mMat[7]) + (mMat[14] * other.mMat[11]) + (mMat[15] * other.mMat[15]));
	return multiNum;
}

bool Matrix4::operator==(Matrix4 & other)
{
	bool same = true;
	for (int i = 0; i < 16; i += 1)
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

ostream & operator<<(ostream & output, Matrix4 & other)
{
	output << "< " << other.mMat[0] << " , " << other.mMat[1] << " , " << other.mMat[2] << " , " << other.mMat[3] << " >" << endl;
	output << "< " << other.mMat[4] << " , " << other.mMat[5] << " , " << other.mMat[6] << " , " << other.mMat[7] << " >" << endl;
	output << "< " << other.mMat[8] << " , " << other.mMat[9] << " , " << other.mMat[10] << " , " << other.mMat[11] << " >" << endl;
	output << "< " << other.mMat[12] << " , " << other.mMat[13] << " , " << other.mMat[14] << " , " << other.mMat[15] << " >" << endl;
	return output;
}

istream & operator>>(istream & input, Matrix4 & other)
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
	input >> other.mMat[9];
	input >> other.mMat[10];
	input >> other.mMat[11];
	input >> other.mMat[12];
	input >> other.mMat[13];
	input >> other.mMat[14];
	input >> other.mMat[15];
	return input;
}
