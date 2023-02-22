int utopianTree(int n)
{
    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            answer += 1;
        else
            answer *= 2;
    }


    return answer;
}