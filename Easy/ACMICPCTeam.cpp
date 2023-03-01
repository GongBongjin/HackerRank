#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//
// 0000 0000 0
// 0000 0001 1
// 0000 0010 2
// 00000 0		int a;
// 01010 10		int b;
// 11000 24		int c;
// a & b = 0;
// b & c = 8
// b | c = 11010 = 26
// ->map���� �����ϸ� �ߺ� Ƚ���� �� �� �ְ�
// 
// int tmp = a | b;
// 
// �ִ� ����
// 
// ���� �� ��Ʈ������(|)�� �Ἥ ���� ū ���� ã�´�
// 
// 11111 -> testNum
// ���⼭ 1������ ���ϸ� 10 -> 2 

vector<int> acmTeam(vector<string> topic)
{
    int maxCount = 0, maxTeams = 0;

    for (int i = 0; i < topic.size(); i++)
    {
        string str1 = topic[i];
        for (int j = i + 1; j < topic.size(); j++)
        {
            string str2 = topic[j];
            int tempMax = 0, tempMaxTeam = 0;
            for (int k = 0; k < str2.length(); k++)
            {
                if (str1[k] == '1' || str2[k] == '1')
                {
                    tempMax++;
                }
            }
            if (tempMax == maxCount)
            {
                maxCount = tempMax;
                maxTeams++;
            }
            else if (tempMax > maxCount)
            {
                maxCount = tempMax;
                maxTeams = 1;
            }
        }
    }
    vector<int> answer(2);

    answer[0] = maxCount;
    answer[1] = maxTeams;

    return answer;
}

int main()
{
	vector<int> vec = acmTeam({ "10101","11100","11010", "00101" });

	for (int v : vec)
		cout << v << endl;

	return 0;
}