int minimumDistances(vector<int> a)
{
    int answer = -1;

    vector<int> vec = {};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (i == j) continue;

            if (a[i] == a[j])
            {
                vec.push_back(abs(i - j));
            }
        }
    }

    if (!vec.empty())
        answer = *min_element(vec.begin(), vec.end());

    return answer;
}