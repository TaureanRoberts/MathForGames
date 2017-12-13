#pragma once
#include <iostream>
using namespace std;
class Vector4
{
public:
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float mX;
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float mY;
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float mZ;
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float mW;
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4();
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4(float x, float y, float z, float w);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4 operator +(Vector4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4 operator -(Vector4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4 operator *(float &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	bool operator ==(Vector4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float Dot(Vector4 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float Magnitude();
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector4 Normalize();
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend ostream& operator << (ostream &output, Vector4&other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend istream& operator >> (istream &input, Vector4 &other);
};