int viralAdvertising(int n)
{
    int answer = 0;

    int s = 5;

    int l = 0;

    for (int i = 1; i <= n; i++)
    {
        s /= 2;

        l += s;

        s = s * 3;
    }

    answer = l;



    return answer;
}