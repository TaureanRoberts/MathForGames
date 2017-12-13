#pragma once
#include <iostream>
using namespace std;

class Matrix3
{
public:
	//Prototype: float mMat[9];
	//Description: Array with the size of 9
	//Precondition: Used to assign the array of size 9 when called
	//Post Condition: Allows placment within the set array range
	//Protection Level: public
	float mMat[9];
	//Prototype:Matrix3();
	//Description: default constructor
	//Precondition: n/a
	//Post Condition: n/a 
	//Protection Level: public
	Matrix3();
	//Prototype:	Matrix3(float mat[]);
	//Description: sets the array
	//Precondition: takes in float array
	//Post Condition: returns new array
	//Protection Level: public
	Matrix3(float mat[]);
	//Prototype:Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI);
	//Description: sets the index for the matrix
	//Precondition: takes in the array and give placement
	//Post Condition: returns the arrays places
	//Protection Level: public
	Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI);
	//Prototype: Matrix3 operator +(Matrix3 &other);
	//Description: adds matrix arrays
	//Precondition: takes in one array and a place holder array
	//Post Condition: returns set amount
	//Protection Level: public
	Matrix3 operator +(Matrix3 &other);
	//Prototype:	Matrix3 operator -(Matrix3 &other);
	//Description: subtracts one side from another
	//Precondition: takes in a arrry 
 	//Post Condition: returns a new array
	//Protection Level: public
	Matrix3 operator -(Matrix3 &other);
	//Prototype: Matrix3 operator *(Matrix3 &other);
	//Description: scales the array to a number
	//Precondition: takes the original array 
	//Post Condition: scales it by the set size
	//Protection Level: public
	Matrix3 operator *(Matrix3 &other);
	//Prototype: bool operator == (Matrix3 &other);
	//Description: Compares the strings 
	//Precondition: Compares the two values and variables and connects the two.
	//Post Condition: Checks if the two are the same or the condition matches the rules of said function
	//Protection Level: public
	bool operator == (Matrix3 &other);
	//Prototype: friend ostream& operator << (ostream &output, Matrix3 &other);
	//Description: shows the info input
	//Precondition: takes the info 
	//Post Condition: displays the info
	//Protection Level: public
	friend ostream& operator << (ostream &output, Matrix3 &other);
	//Prototype: 	friend istream& operator >> (istream &input, Matrix3 &other);
	//Description: gives input to the user
	//Precondition: takes info from user
	//Post Condition: intakes info
	//Protection Level: public
	friend istream& operator >> (istream &input, Matrix3 &other);
};