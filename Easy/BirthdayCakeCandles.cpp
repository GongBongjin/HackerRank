int birthdayCakeCandles(vector<int> candles)
{
    int answer = 0;
    int tallestNum = *max_element(candles.begin(), candles.end());

    for (int i = 0; i < candles.size(); i++)
    {
        if (candles[i] == tallestNum)
            answer++;
    }

    return answer;
}