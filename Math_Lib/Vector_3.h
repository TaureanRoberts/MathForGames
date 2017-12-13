#pragma once
#include <iostream>
using namespace std;
class Vector3
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
	Vector3();
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector3(float x, float y, float z);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector3 operator+(Vector3 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector3 operator-(Vector3 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector3 operator*(float &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	bool operator == (Vector3 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	float Dot(Vector3 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	Vector3 Cross(Vector3 &other);
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
	Vector3 Normalize();
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend ostream& operator << (ostream &output, Vector3 &other);
	//Prototype:
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level:
	friend istream& operator >> (istream &input, Vector3 &other);
};