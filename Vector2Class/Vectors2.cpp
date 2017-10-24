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
	Vector2 Sum2;
	Sum.mX = other.mX + Sum2.mY;
	Sum.mY = other.mY + Sum2.mX;
	return Sum;
}

Vector2 Vector2::operator-(Vector2 & other)
{
	Vector2 Sub;
	Vector2 Sub2;
	Sub.mX = other.mX - Sub2.mX;
	Sub.mY = other.mY - Sub2.mY;
	return Sub;
}

Vector2 Vector2::operator*(float other)
{
	float scale;


	return ;
}
