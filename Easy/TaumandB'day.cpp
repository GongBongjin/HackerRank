#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z)
{
	return ((long long)b * min(bc, wc + z)) + ((long long)w * min(wc, bc + z));
}


int main()
{
	long l = taumBday(443463982, 833847400, 429734889, 628664883, 610875522);

	cout << l << endl;

	return 0;
}