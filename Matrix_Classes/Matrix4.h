#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	float mMat[];
	Matrix4();
	Matrix4(float mat[]);
	Matrix4(float indexA, float indexB, float indexC, float indexD);
	Matrix4 operator +(Matrix4 &other);
	Matrix4 operator -(Matrix4 &other);
	Matrix4 operator *(Matrix4 &other);
	friend ostream& operator << (ostream &output, Matrix4 &other);
	friend istream& operator >> (istream &input, Matrix4 &other);
};