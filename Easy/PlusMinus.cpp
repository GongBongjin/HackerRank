void plusMinus(vector<int> arr)
{
    int size = arr.size();

    float cnt1 = 0.0f;
    float cnt2 = 0.0f;
    float cnt3 = 0.0f;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            cnt1++;
        else if (arr[i] == 0)
            cnt2++;
        else
            cnt3++;
    }
    cout << cnt3 / size << endl;
    cout << cnt1 / size << endl;
    cout << cnt2 / size;
}