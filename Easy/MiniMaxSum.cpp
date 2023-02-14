void miniMaxSum(vector<int> arr)
{
    vector<long long> tmp;
    for (int i = 0; i < arr.size(); i++)
    {
        tmp.push_back(arr[i]);
    }

    sort(tmp.begin(), tmp.end());

    unsigned long long sum1 = 0;
    unsigned long long sum2 = 0;

    for (int i = 0; i < tmp.size() - 1; i++)
    {
        sum1 += tmp[i];
    }
    for (int i = 1; i < tmp.size(); i++)
    {
        sum2 += tmp[i];
    }
    cout << sum1 << ' ' << sum2;
}