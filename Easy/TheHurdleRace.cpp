int hurdleRace(int k, vector<int> height)
{
    int answer = 0;

    int tmp = *max_element(height.begin(), height.end());

    if (tmp < k)
        answer = 0;
    else
        answer = tmp - k;

    return answer;
}