
#pragma once
#include <iostream>
using namespace std;
class Vector2
{
public:
	float mX; // x value
	float mY; // y value
	//Prototype: Vector2()
	//Description : makes an instance of the Vector2 class
	//Precondition : none
	//Postcondition : Constructs the Vector2 instance
	//Protection Level : Public
	Vector2();
	//Prototype: Vector2(float x, float y)
	//Description : sets the X and Y value for the vector
	//Precondition : an instance of the Vector2 class
	//Postcondition : sets the X and Y value for the vector
	//Protection Level : Public
	Vector2(float x, float y);
	//Prototype: Vector2 operator+(Vector2 & other)
	//Description : adds two vectors together
	//Precondition : an instance of the Vector2 class
	//Postcondition : returns the sum of two vectors
	//Protection Level : Public*/
	Vector2 operator+(Vector2 & other);
	//Prototype: Vector2 operator-(Vector2 & other)
	//Description : subtracts two vectors
	//Precondition : an instance of the Vector2 class
	//Postcondition : returns the difference of two vectors
	//Protection Level : Public*/
	Vector2 operator-(Vector2 & other);
	//Prototype: Vector2 operator*(float &other)
	//Description : multiplies two vectors
	//Precondition : an instance of the Vector2 class
	//Postcondition : returns the product of two vectors
	//Protection Level : Public
	Vector2 operator *(float &other);
	/*Prototype: bool operator==(Vector2 & other)
	Description : checks to see if two vectors are equal
	Precondition : an instance of the Vector2 class
	Postcondition : checks to see if two vectors are equal
	Protection Level : Public*/
	bool operator==(Vector2 & other);
	/*Prototype: float Dot(Vector2 & other)
	Description : finds the dot product of the vector
	Precondition : an instance of the Vector2 class
	Postcondition : finds the dot product of the vector
	Protection Level : Public*/
	float Dot(Vector2 & other);
	/*Prototype: Vector2 Normalize()
	Description : normalizes the vector after finding the magnitude
	Precondition : an instance of the Vector2 class
	Postcondition : normalizes the vector
	Protection Level : Public*/
	Vector2 Normalize();
	/*Prototype: float Magnitude()
	Description : finds the magnitude of the vector
	Precondition : an instance of the Vector2 class
	Postcondition : finds the magnitude
	Protection Level : Public*/
	float Magnitude();
	/*Prototype: friend ostream& operator<<(ostream &output, Vector2 &other)
	Description : outputs the X and Y value to the console
	Precondition : an instance of the Vector2 class
	Postcondition : outputs the X and Y value to the console
	Protection Level : Public*/
	friend ostream& operator <<(ostream &output, const Vector2 &other);
	/*Prototype: friend istream& operator<<(istream &input, Vector2 &other)
	Description : takes in the X and Y value via user
	Precondition : an instance of the Vector2 class
	Postcondition : takes in the X and Y value via user
	Protection Level : Public*/
	friend istream& operator >> (istream &input, Vector2 &other);
};