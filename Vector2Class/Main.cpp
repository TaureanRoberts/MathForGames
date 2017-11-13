#include <iostream>
#include "Vectors2.h"
#include "Vectors3.h"
#include "Vector4.h"
#include <string>
#include <istream>
#include <fstream>
#include <assert.h>

using namespace std;

int main()
{
	Vector2 *test1 = new Vector2(1,2);
	Vector2 *test2 = new Vector2(3,4);

	assert((*test1 + *test2) == Vector2(4,6) == true);
	assert((*test1 - *test2) == Vector2(2,2) == true);
	
}