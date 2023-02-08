#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int simpleArraySum(vector<int> ar)
{
    int tmp = 0;

    for (int i = 0; i < ar.size(); i++)
    {
        tmp += ar[i];
    }

    return tmp;
}
