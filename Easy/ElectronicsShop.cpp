int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int answer = -1;

    vector<int> maxPrice = {};

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b)
                maxPrice.push_back(keyboards[i] + drives[j]);
        }
    }

    sort(maxPrice.begin(), maxPrice.end());

    answer = maxPrice.empty() ? -1 : maxPrice[maxPrice.size() - 1];

    return answer;
}