#include "Vectors2.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
Vector2::Vector2()
{
	Vector2 *Vectors = new Vector2[255];
}

Vector2::Vector2(float x, float y)
{
	mX = x;
	mY = y;
}

Vector2 Vector2::operator+(Vector2 & other)
{
	Vector2 Sum;
	Sum.mX = other.mX + mX;
	Sum.mY = other.mY + mY;
	return Sum;
}

Vector2 Vector2::operator-(Vector2 & other)
{
	Vector2 Sub;
	Sub.mX = other.mX - mX;
	Sub.mY = other.mY - mY;
	return Sub;
}

Vector2 Vector2::operator*(float & other)
{
	Vector2 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	return scale;
}

bool Vector2::operator==(Vector2 &other)
{
	if ((mX != other.mX)||(mY != other.mY))
	{
		return false;
	}
	for (int i = 0; i <= mX||mY ;i++)
	{
		if ((i != other.mX )||(i != other.mY))
		{
			return false;
		}
	}
	return true;
}

float Vector2::Dot(Vector2 & other)
{
	float mDot;
	mDot =((mX * other.mX)+(mY * other.mY));
	return mDot;
}

float Vector2::Magnitude()
{
	float mag;
	mag = sqrt((mX * mX) + (mY *mY));	
	return mag;
}

Vector2 Vector2::Normalize()
{
	Vector2 mNorm;
	mNorm.mX = mX / Magnitude();
	mNorm.mY = mY / Magnitude();
	return mNorm;
}

ostream & operator<<(ostream & output, Vector2 &other)
{
	output << "< " << other.mX <<" , "<< other.mY << " >" << endl;
	return output;
}

istream & operator >> (istream &input, Vector2 &other)
{
	input >> other.mX;
	input >> other.mY;
	return  input;
}