#pragma once
#include <iostream>
using namespace std;

class Matrix3
{
public:
	float mMat[];
	Matrix3(float mat[]);
	Matrix3(float indexA, float indexB, float indexC, float indexD);
	Matrix3 operator +(Matrix3 &other);
	Matrix3 operator -(Matrix3 &other);
	Matrix3 operator *(Matrix3 &other);
	friend ostream& operator << (ostream &output, Matrix3 &other);
	friend istream& operator >> (istream &input, Matrix3 &other);
};