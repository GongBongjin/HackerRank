vector<int> permutationEquation(vector<int> p)
{
    vector<int> answer = {};

    for (int i = 1; i <= 50; i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (i != p[j]) continue;

            for (int k = 0; k < p.size(); k++)
            {
                if (p[j] == p[p[k] - 1])
                {
                    answer.push_back(k + 1);
                    break;
                }

            }

        }
    }
    return answer;
}