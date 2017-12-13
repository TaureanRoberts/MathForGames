#pragma once
#include <iostream>
using namespace std;
class Vector2
{
public:
	//Prototype: float mX
	//Description: A float used for geting the x axis in the vector
	//Precondition: takes a float value
	//PostCondition: positions on the x axis using the value.
	//Protection Level: public
	float mX;
	//Prototype: float mY
	//Description: A float used for geting the y axis in the vector
	//Precondition: takes a float value
	//PostCondition: positions on the y axis using the value.
	//Protection Level: public
	float mY;
	//Prototype: Vector2()
	//Description: Default Constructor
	//Precondition: n/a
	//PostCondition: n/a
	//Protection Level: public
	Vector2();
	//Prototype: Vector2(float x, float y);
	//Description: Takes in the x and y axis
	//Precondition: assigns values to the axis 
	//PostCondition: returns a point to be set
	//Protection Level: public
	Vector2(float x, float y);
	//Prototype: Vector2 operator +(Vector2 &other);
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Vector2 operator +(Vector2 &other);
	//Prototype: Vector2 operator -(Vector2 &other);
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Vector2 operator -(Vector2 &other);
	//Prototype: Vector2 operator *(float &other);
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Vector2 operator *(float &other);
	//Prototype: bool operator == (Vector2 &other)
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	bool operator ==(Vector2 &other);
	//Prototype: float Dot (Vector2 &other)
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	float Dot(Vector2 &other);
	//Prototype: float Magnitude()
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	float Magnitude();
	//Prototype: Vector2 Normalize();
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	Vector2 Normalize();
	//Prototype: friend ostream& operator << (ostream &output, Vector2 &other)
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	friend ostream& operator << (ostream &output, Vector2 &other);
	//Prototype: friend istream& operator >> (istream &input, Vector2 &other)
	//Description:
	//Precondition:
	//PostCondition:
	//Protection Level: public
	friend istream& operator >> (istream &input, Vector2 &other);
};