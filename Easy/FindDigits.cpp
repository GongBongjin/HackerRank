#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findDigits(int n)
{
    string str = to_string(n);

    int answer = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            break;
        else
        {
            if (n % (str[i]-'0') == 0)
                answer++;
        }
    }

    return answer;
}