#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int equalizeArray(vector<int> arr)
{
    int answer = 0;
    vector<int> tmp = {};

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                cnt++;
        }

        tmp.push_back(cnt);
    }

    int maxNum = *max_element(tmp.begin(), tmp.end());

    answer = arr.size() - maxNum;

    return answer;
}