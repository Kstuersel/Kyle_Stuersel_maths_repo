#include <iostream>
#include <math.h>

using namespace std;

void square(int numToBeSquared);

int main()
{
	cout << "GitHub Test" << endl;
	square(7);
}

void square(int squareNum)
{
	cout << (squareNum * squareNum) << endl;
}