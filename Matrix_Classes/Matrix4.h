#pragma once
#include <iostream>
using namespace std;
<<<<<<< HEAD
=======

>>>>>>> origin/master
class Matrix4
{
public:
	float mMat[];
	Matrix4();
	Matrix4(float mat[]);
<<<<<<< HEAD
	Matrix4(float indexA, float indexB, float indexC, float indexD);
=======
	Matrix4(float indexA);
>>>>>>> origin/master
	Matrix4 operator +(Matrix4 &other);
	Matrix4 operator -(Matrix4 &other);
	Matrix4 operator *(Matrix4 &other);
	friend ostream& operator << (ostream &output, Matrix4 &other);
	friend istream& operator >> (istream &input, Matrix4 &other);
};