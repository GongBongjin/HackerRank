vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> answer = {};

    while (true)
    {
        int cnt = 0;
        int minNum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= 0)
                continue;

            if (minNum == 0)
                minNum = arr[i];

            if (minNum > arr[i])
                minNum = arr[i];
        }

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] <= 0)
                continue;
            arr[j] -= minNum;
            cnt++;
        }
        answer.push_back(cnt);

        int tmp = *max_element(arr.begin(), arr.end());

        if (tmp == 0)
            break;
    }

    return answer;
}