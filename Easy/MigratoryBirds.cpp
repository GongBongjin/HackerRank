int migratoryBirds(vector<int> arr)
{
    vector<int> answer = { 0,0,0,0,0 };

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == j + 1)
            {
                answer[j]++;
            }
        }
    }

    return max_element(answer.begin(), answer.end()) - answer.begin() + 1;
}