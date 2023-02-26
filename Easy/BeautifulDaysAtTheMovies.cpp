#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int beautifulDays(int i, int j, int k)
{
    int answer = 0;

    vector<int> tmp = {};
    vector<int> tmp2 = {};


    for (int index = i; index <= j; index++)
    {
        string str = "";

        str = to_string(index);

        reverse(str.begin(), str.end());

        int revNum = 0;

        for (int index2 = 0; index2 < str.size(); index2++)
            revNum = revNum * 10 + (str[index2]-'0');

        tmp.push_back(revNum);
        tmp2.push_back(index);
    }

    for(int i = 0; i<tmp.size(); i++)
    {
        if (abs(tmp[i] - tmp2[i]) % k == 0)
            answer++;
    }
    return answer;
}