#include "Vectors2.h"

Vector2::Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	Vector2 ;

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

Vector2 Vector2::operator*(float other)
{
	float scale;
	

	return ;
}

Vector2 Vector2::Normalize()
{
	return Vector2();
}

float Vector2::Magnitude()
{
	return 0.0f;
}
