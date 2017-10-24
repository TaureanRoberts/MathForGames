#pragma once
class Vector3
{
public:
	float mX;
	float mY;
	float mZ;
	Vector3();
	Vector3(float x, float y, float z);
	Vector3 AddThings(Vector3 &other);
	Vector3 SubThings(Vector3 &other);
	Vector3 ScaleThings(float other);
};