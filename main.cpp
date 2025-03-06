#include <iostream>
#include <cmath>

using namespace std;

void power(int base, int exponent);

int main()
{
	cout << "GitHub Test" << endl;
	power(7, 2);
}

void power(int base, int exponent)
{
	cout << pow(base, exponent) << endl;
}