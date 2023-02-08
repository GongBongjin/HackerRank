#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> tmp;

    int scoreA = 0;
    int scoreB = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
            scoreA++;
        else if (a[i] < b[i])
            scoreB++;
    }

    tmp.push_back(scoreA);
    tmp.push_back(scoreB);

    return tmp;
}