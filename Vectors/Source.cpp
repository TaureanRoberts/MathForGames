#include "Vector2.h"
Vector2 AddStuff(Vector2 lhs, Vector2 rhs);
Vector2 Subtract(Vector2 lhs, Vector2 rhs);
int main()
{
	Vector2 test1 = (1,1);
	Vector2 test2 = (2,2);
	Subtract(test1, test2);
}

Vector2 AddStuff(Vector2 lhs, Vector2 rhs)
{
	Vector2 add;
	add.mX = lhs.mX - rhs.mX;
	add.mY = lhs.mY - rhs.mY;
	return add;
}

Vector2 Subtract(Vector2 lhs, Vector2 rhs)
{
	Vector2 sub;
	sub.mX = rhs.mX - lhs.mX;
	sub.mY = rhs.mY - lhs.mY;
	return sub;
}

Vector2 Scaler(Vector2 lhs, float rhs)
{
	Vector2 scale;
	scale.mX = lhs.mY * scale.mX;
	scale.mY = lhs.mX * scale.mY;
	return scale;
}