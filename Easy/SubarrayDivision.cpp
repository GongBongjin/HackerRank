int birthday(vector<int> s, int d, int m)
{
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int tmp = 0;
        int index = 0;
        int cnt = 0;

        while (cnt < m)
        {
            tmp += s[i + index];

            if (tmp == d && cnt == m - 1)
            {
                answer++;
                continue;
            }
            index++;
            cnt++;
        }
    }
    return answer;
}