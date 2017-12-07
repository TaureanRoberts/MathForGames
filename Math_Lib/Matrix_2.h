#pragma once
#include <iostream>
using namespace std;
class Matrix2
{
public:
	//Prototype: float mMat[4]
	//Description: a float array of size 4
	//Precondition: takes a float up to 4 places
	//Post Condition: returns 4 values 
	//Protection Level: Public
	float mMat[4];
	//Prototype: Matrix2(); 
	//Description: default constructor
	//Precondition: n/a
	//Post Condition: n/a
	//Protection Level: public
	Matrix2();
	//Prototype: Matrix2(float mat[]);
	//Description: Constructor that has a float array arguement
	//Precondition: takes an array 
	//Post Condition: gives a array
	//Protection Level: Public
	Matrix2(float mat[]);
	//Prototype: Matrix2(float indexA, float indexB, float indexC, float indexD);
	//Description: sets arguements for an array
	//Precondition: takes floats into a array
	//Post Condition: sets floats at set index
	//Protection Level: Public
	Matrix2(float indexA, float indexB, float indexC, float indexD);
	//Prototype: Matrix2 operator +(Matrix2 &other);
	//Description: adds matrix
	//Precondition: adds two matrix arrays
	//Post Condition: returns a matrix
	//Protection Level: Public
	Matrix2 operator +(Matrix2 &other);
	//Prototype: Matrix2 operator -(Matrix2 &other);
	//Description: subtracts array
	//Precondition: takes two arrays
	//Post Condition: returns a matrix array
	//Protection Level: public
	Matrix2 operator -(Matrix2 &other);
	//Prototype: Matrix2 operator *(Matrix2 &other);
	//Description: scales the matrix
	//Precondition: takes a matrix
	//Post Condition: returns a matrix
	//Protection Level: public
	Matrix2 operator *(Matrix2 &other);
	//Prototype: bool operator == (Matrix2 &other);
	//Description: compares a matrix 
	//Precondition: takes a matrix
	//Post Condition: returns a matrix
	//Protection Level: public
	bool operator == (Matrix2 &other);
	//Prototype: friend ostream& operator << (ostream &output, Matrix2 &other);
	//Description: outputs a matrix
	//Precondition: takes a matrix 
	//Post Condition: displays matrix
	//Protection Level: public
	friend ostream& operator << (ostream &output, Matrix2 &other);
	//Prototype: friend istream& operator >> (istream &input, Matrix2 &other);
	//Description: allows user input 
	//Precondition: gives input for matrix
	//Post Condition: takes in information passed in
	//Protection Level: public
 	friend istream& operator >> (istream &input, Matrix2 &other);
};