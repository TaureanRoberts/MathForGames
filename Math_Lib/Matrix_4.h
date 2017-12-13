#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	//Prototype: float mMat[16]
	//Description: An Array of size 16
	//Precondition: Taken in as a float to be assignesd for the matrix
	//PostCondition: Sets size of the array for the class
	//Protection Level: public
	float mMat[16];
	//Prototype: Matrix4()
	//Description: Default construct
	//Precondition: n/a
	//PostCondition: n/a
	//Protection Level: public
	Matrix4();
	//Prototype: Matrix4(float mat[])
	//Description: Default that takes a float array with no set size
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Matrix4(float mat[]);
	//Prototype: Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	//Prototype: Matrix4 operator +(Matrix4 &other);
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Matrix4 operator +(Matrix4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Matrix4 operator -(Matrix4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Matrix4 operator *(Matrix4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	bool operator == (Matrix4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend ostream& operator << (ostream &output, Matrix4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend istream& operator >> (istream &input, Matrix4 &other);
};