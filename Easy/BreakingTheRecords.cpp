vector<int> breakingRecords(vector<int> scores)
{
    vector<int> highS;
    vector<int> lowS;

    int hCnt = 0;
    int lCnt = 0;
    vector<int> answer;

    for (int i = 0; i < scores.size(); i++)
    {
        if (highS.empty())
            highS.push_back(scores[i]);
        if (lowS.empty())
            lowS.push_back(scores[i]);

        if (i >= 1)
        {
            if (scores[i] > highS[i - 1])
                highS.push_back(scores[i]);
            else
                highS.push_back(highS[i - 1]);

            if (scores[i] < lowS[i - 1])
                lowS.push_back(scores[i]);
            else
                lowS.push_back(lowS[i - 1]);
        }
    }
    for (int i = 1; i < scores.size(); i++)
    {
        if (highS[i - 1] < highS[i])
            hCnt++;
        if (lowS[i - 1] > lowS[i])
            lCnt++;
    }

    answer = { hCnt, lCnt };

    return answer;
}