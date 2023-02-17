int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int pairs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int tmp = ar[i];

            if (i + j >= n) continue;

            tmp += ar[i + j];

            if (tmp % k == 0)
                pairs++;
        }
    }
    return pairs;
}