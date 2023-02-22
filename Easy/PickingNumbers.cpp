int pickingNumbers(vector<int> a)
{
    int answer = 0;

    vector<int> tmp;
    for (int i = 0; i < a.size(); i++)
    {
        int sameNum = 0;
        int bigNum = 0;
        int smallNum = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[i] == a[j])
                sameNum++;
            else if (a[i] == a[j] + 1)
                bigNum++;
            else if (a[i] == a[j] - 1)
                smallNum++;
        }

        if (bigNum > smallNum)
            tmp.push_back(bigNum + sameNum);
        else
            tmp.push_back(smallNum + sameNum);
    }

    sort(tmp.begin(), tmp.end());

    answer = tmp[tmp.size() - 1];

    return answer;
}
