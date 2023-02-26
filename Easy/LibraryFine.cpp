#include <iostream>
#include <string>
#include <vector>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int answer = 0;
	
	if (y1 > y2)
		answer = 10000;
	else if (y1 < y2)
		answer = 0;
	else
	{
		if (m1 > m2)
			answer = (m1 - m2) * 500;
		else if (m1 < m2)
			answer = 0;
		else
		{
			if (y1 <= y2)
				answer = 0;
			else
				answer = (y2 - y1) * 15;
		}
	}
	return answer;
}