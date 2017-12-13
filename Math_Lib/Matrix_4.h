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
	//Precondition: Gives the array a size to go off of.
	//PostCondition: Returns the a new array size. 
	//Protection Level: public
	Matrix4(float mat[]);
	//Prototype: Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	//Description: Sets each value at an index in the array
	//Precondition: assigns each index to a coordinate location
	//PostCondition:
	//Protection Level: public
	Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	//Prototype: Matrix4 operator +(Matrix4 &other);
	//Description: Adds two varibles/values and adds them together. 
	//Precondition: Takes the left hand sides and adds it to the other side
	//PostCondition: Returns new value
	//Protection Level: public
	Matrix4 operator +(Matrix4 &other);
	//Prototype: Matrix4 operator -(Matrix4 &other);
	//Description: Takes two varibles and adds them to each other
	//Precondition: Takes the left hand side and adds them to the right side.
	//PostCondition: returns the new value
	//Protection Level:
	Matrix4 operator -(Matrix4 &other);
	//Prototype: Matrix4 operator *(Matrix4 &other); 
	//Description: Scales the value by a certain number
	//Precondition: takes in a value
	//PostCondition: scales it by other value value
	//Protection Level: public
	Matrix4 operator *(Matrix4 &other);
	//Prototype: bool operator == (Matrix4 &other);
	//Description: Compares two variables and checks the condition matches with the function
	//Precondition: Compares two variables and checks the condition matches with the function
	//PostCondition: returns true if the values match up. returns false if it doesnt match up
	//Protection Level: public
	bool operator == (Matrix4 &other);
	//Prototype: friend ostream& operator << (ostream &output, Matrix4 &other)
	//Description: Takes information in the program and displays it to the user
	//Precondition: Takes info in the program
	//PostCondition: Displays the info passed in the function
	//Protection Level: public
	friend ostream& operator << (ostream &output, Matrix4 &other);
	//Prototype: friend istream& operator >> (istream &input, Matrix4 &other)
	//Description: Allows user input in the program
	//Precondition: takes in the user information that can be used in the program
	//PostCondition: Stores the info into the program. 
	//Protection Level: public
	friend istream& operator >> (istream &input, Matrix4 &other);
};