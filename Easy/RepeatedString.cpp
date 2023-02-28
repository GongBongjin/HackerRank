long repeatedString(string s, long n)
{
    long answer = 0;
    int cnt = 0;
    int cnt2 = 0;
    long long temp = (long long)n / (long long)s.size();
    int temp2 = n % s.size();

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            cnt++;
    }

    for (int i = 0; i < temp2; i++)
    {
        if (s[i] == 'a')
            cnt2++;
    }


    answer = (cnt * temp) + cnt2;
    return answer;
}