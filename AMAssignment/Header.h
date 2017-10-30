#pragma once
#include <iostream>

class Vector3D
{
private:
	const int *mVector;
public:
	float mX;
	float mY;
	float mZ;
	Vector3D();
	
	int getLength(int x, int y, int z);
	int getIndex(int pos);
	Vector3D operator + (Vector3D &other);
	Vector3D operator * (float other);
	bool compareVects();
	bool isSame(int x, int y, int z);
};