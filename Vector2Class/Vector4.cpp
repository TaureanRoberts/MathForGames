#include "Vector4.h"
#include "math.h"
Vector4::Vector4()
{
}

Vector4::Vector4(float x, float y, float z, float w)
{
	mX = x;
	mY = y;
	mZ = z;
	mW = w;
}

Vector4 Vector4::operator+(Vector4 & other)
{
	Vector4 sum;
	sum.mX = other.mX + other.mX + mX;
	sum.mY = other.mY + other.mY + mY;
	sum.mZ = other.mZ + other.mZ + mZ;
	sum.mW = other.mW + other.mW + mW;
	return sum;
}

Vector4 Vector4::operator-(Vector4 & other)
{
	Vector4 sub;
	sub.mX = other.mX - other.mX - mX;
	sub.mY = other.mY - other.mY - mY;
	sub.mZ = other.mZ - other.mZ - mZ;
	sub.mW = other.mW - other.mW - mW;
	return sub;
}

Vector4 Vector4::operator*(float & other)
{
	Vector4 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	scale.mZ = mZ * other;
	scale.mW = mW * other;
	return scale;
}

bool Vector4::operator==(Vector4 & other)
{
	if ((mX != other.mX) || (mY != other.mY) || (mZ != other.mZ) || (mW != other.mW))
	{
		return false;
	}
	else
		return true;
}

float Vector4::Dot(Vector4 & other)
{
	float mDot;
	mDot = ((mX * other.mX) + (mY * other.mY) + (mZ * other.mZ)|| (mW * other.mW));
	return mDot;
}

float Vector4::Magnitude()
{
	float mag;
	mag = sqrt((mX * mX) + (mY * mY) + (mZ * mZ) + (mW * mW));
	return mag;
}

Vector4 Vector4::Normalize()
{
	Vector4 mNorm;
	mNorm.mX = mX / Magnitude();
	mNorm.mY = mY / Magnitude();
	mNorm.mZ = mZ / Magnitude();
	mNorm.mW = mW / Magnitude();
	return mNorm;
}

ostream & operator<<(ostream & output, Vector4 & other)
{
	output << "< " << other.mX << " , " << other.mY << " , " << other.mZ << " , " << other.mW << " >" << endl;
	return output;
}

istream & operator >> (istream & input, Vector4 & other)
{
	input >> other.mX;
	input >> other.mY;
	input >> other.mZ;
	input >> other.mW;
	return input;
}
