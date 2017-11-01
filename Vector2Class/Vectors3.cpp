#include "Vectors3.h"
#include "math.h"
Vector3::Vector3()
{
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

Vector3 Vector3::operator+(Vector3 & other)
{
	Vector3 sum;	
	sum.mX = other.mX + other.mX + mX;
	sum.mY = other.mY + other.mY + mY;
	sum.mZ = other.mZ + other.mZ + mZ;
	return sum;
}

Vector3 Vector3::operator-(Vector3 & other)
{
	Vector3 sub;
	sub.mX = other.mX - other.mX - mX;
	sub.mY = other.mY - other.mY - mY;
	sub.mZ = other.mZ - other.mZ - mZ;
	return sub;
}

Vector3 Vector3::operator*(float & other)
{
	Vector3 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	scale.mZ = mZ * other;
	return scale;
}

bool Vector3::operator==(Vector3 & other)
{
	if ((mX != other.mX) || (mY != other.mY) || (mZ != other.mZ))
	{
		return false;
	}
	else
	return true;
}

float Vector3::Dot(Vector3 & other)
{
	float mDot;
	mDot = ((mX * other.mX) + (mY * other.mY) + (mZ * other.mZ));
	return mDot;
}

Vector3 Vector3::Cross(Vector3 & other)
{
	Vector3 mCross;
	mCross.mX = ((mY * other.mZ)-(mZ * other.mY));
	mCross.mY = ((mZ * other.mX)-(mX * other.mZ));
	mCross.mZ = ((mX * other.mY)-(mY * other.mX));
	return mCross;
}

float Vector3::Magnitude()
{
	float mag;
	mag = sqrt((mX * mX) + (mY * mY) + (mZ * mZ));
	return mag;
}

Vector3 Vector3::Normalize()
{
	Vector3 mNorm;
	mNorm.mX = mX / Magnitude();
	mNorm.mY = mY / Magnitude();
	mNorm.mZ = mZ / Magnitude();
	return mNorm;
}

ostream & operator<<(ostream & output, Vector3 & other)
{
	output << "< " << other.mX << " , " << other.mY << " , " << other.mZ << " > " << endl;
	return output;
}

istream & operator >> (istream & input, Vector3 & other)
{
	input >> other.mX;
	input >> other.mY;
	input >> other.mZ;
	return input;
}
