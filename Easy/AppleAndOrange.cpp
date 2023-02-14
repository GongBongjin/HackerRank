void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleCnt = 0;
    int orangeCnt = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        if (a + apples[i] >= s && a + apples[i] <= t)
            appleCnt++;
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        if (b + oranges[i] >= s && b + oranges[i] <= t)
            orangeCnt++;
    }

    cout << appleCnt << endl;
    cout << orangeCnt;
}